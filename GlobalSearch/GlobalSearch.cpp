#include "../GlobalSearch/GlobalSearch.h"
#include <algorithm>

bool sortbysec(const std::pair<double, double>& a,
  const std::pair<double, double>& b) {
  return (a.second < b.second);
}

std::pair<double, double> GlobalSearch::GlobalSearchAlgorithm() {
  analysis.push_back(std::make_pair(a, function(a)));
  analysis.push_back(std::make_pair(b, function(b)));

  do {
    sortAnalysisVector();
    calculate_m();
    int t = calculateMaxR();
    double tempX = 0.5 * (analysis[t].first + analysis[t - 1].first) -
      (analysis[t].second - analysis[t - 1].second) / (2 * m);
    analysis.push_back(std::make_pair(tempX, function(tempX)));

    if(analysis[t].first - analysis[t - 1].first <= precision) 
      break;
  } while (true);

  std::sort(analysis.begin(), analysis.end(), sortbysec);

  return analysis[0];
}

void GlobalSearch::sortAnalysisVector() {
  std::sort(analysis.begin(), analysis.end());
}

void GlobalSearch::calculate_m() {
  // searching the maximum M value 
  double M = calculateM(1);
  for (int i = 1; i < analysis.size() - 1; i++) {
    if (double tempM = calculateM(i + 1) > M)
      M = tempM;
  }

  // define m value
  if (M > 0)
    m = r * M;
  else m = 1;
}

double GlobalSearch::calculateM(int index) {
  return (analysis[index].second - analysis[index - 1].second) /
    (analysis[index].first - analysis[index - 1].first);
}

double GlobalSearch::calculateR(int index) {
  double temp = m * (analysis[index].first - analysis[index - 1].first);
  return temp + pow(analysis[index].second - analysis[index - 1].second, 2) / temp -
    2 * (analysis[index].second + analysis[index - 1].second);

}

int GlobalSearch::calculateMaxR() {
  double R = calculateR(1);
  int indexR = 1;
  for (int i = 1; i < analysis.size() - 1; i++)
    if (double tempR = calculateR(i + 1) > R) {
      R = tempR;
      indexR = i + 1;
    }
  return indexR;
}
