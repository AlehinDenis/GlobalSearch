#include "../GlobalSearch/GlobalSearch.h"
#include <algorithm>
#include <iostream>
#include <stdlib.h> 

bool sortbysec(const std::pair<double, double>& a,
  const std::pair<double, double>& b) {
  return (a.second < b.second);
}

GlobalSearch::GlobalSearch(std::function<double(double)> _function, double _a, double _b, double _precision, double _r) {
  if (a > b)
    throw "Error: a > b";
  if (r <= 0)
    throw "Error: r <= 1";
  
  function = _function;
  a = _a;
  b = _b;
  r = _r;
  precision = _precision;
}

std::pair<double, double> GlobalSearch::GlobalSearchAlgorithm() {
  analysis.push_back(std::make_pair(a, function(a)));
  analysis.push_back(std::make_pair(b, function(b)));

  int t = 0;
  do {
    sortAnalysisVector();
    calculate_m();
    t = calculateMaxR();
    double newStudyX = (analysis[t].first + analysis[t - 1].first) / 2 -
      (analysis[t].second - analysis[t - 1].second) / (2 * m);
    analysis.push_back(std::make_pair(newStudyX, function(newStudyX)));
    //std::cout << "(" << newStudyX << ", " << function(newStudyX) << ")" << std::endl;
  } while (analysis[t].first - analysis[t - 1].first > precision);

  std::sort(analysis.begin(), analysis.end(), sortbysec);

  return analysis[0];
}

void GlobalSearch::printAnasysisVector() {
  std::cout << "The count of study: " << analysis.size() - 1 << std::endl;
  for (int i = 0; i < analysis.size(); i++)
    std::cout << "(" << analysis[i].first << ", " << analysis[i].second << ")" << std::endl;
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
  else if (M == 0) m = 1;
  else throw("Error: M < 0");
}

double GlobalSearch::calculateM(int index) {
  return abs(analysis[index].second - analysis[index - 1].second) /
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
