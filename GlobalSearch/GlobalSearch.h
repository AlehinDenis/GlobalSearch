#pragma once
#include <vector>
#include <functional>

class GlobalSearch {
public:
  GlobalSearch(std::function<double(double)> _function, double _a, double _b,
    double _precision, double _r = 2);

  std::pair<double, double> GlobalSearchAlgorithm();

  void printAnasysisVector();

private:
  std::function<double(double)> function;
  double r, precision;
  double a, b;
  double m;
  std::vector<std::pair<double, double>> analysis;

  void sortAnalysisVector();
  void calculate_m();
  double calculateM(int index);
  int calculateMaxR();
  double calculateR(int index);
};