#include "../GlobalSearch/GlobalSearch.h"
#include <iostream>

int main() {
  std::function<double(double)> f1 = [](double x) { return x; };
  std::function<double(double)> f2 = [](double x) { return std::sin(x); };

  std::cout << "y = x, [1,5]:\n";
  GlobalSearch globalSearch1(f1, 1, 5, 1);
  std::pair<double, double> result1 = globalSearch1.GlobalSearchAlgorithm();
  std::cout << "x = " << result1.first
    << "\ny = " << result1.second;

  std::cout << "\n\ny = sin(x), [1, 9]: \n";
  GlobalSearch globalSearch2(f2, 1, 9, 1);
  std::pair<double, double> result2 = globalSearch2.GlobalSearchAlgorithm();
  std::cout << "x = " << result2.first
    << "\ny = " << result2.second;
    
  return 0;
}