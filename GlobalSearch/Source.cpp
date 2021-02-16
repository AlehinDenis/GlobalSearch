#include "../GlobalSearch/GlobalSearch.h"
#include <iostream>
#include <iomanip>

int main() {
  std::cout << std::setprecision(3);
  std::function<double(double)> f1 = [](double x) { return x; };
  std::function<double(double)> f2 = [](double x) { return std::sin(x); };
  std::function<double(double)> f3 = [](double x) { return std::sin(x) * x; };
  /*
  std::cout << "y = x, [1,5]:\n";
  GlobalSearch globalSearch1(f1, 1, 5, 0.1);
  std::pair<double, double> result1 = globalSearch1.GlobalSearchAlgorithm();
  //globalSearch1.printAnasysisVector();
  std::cout << "Result: (" << result1.first << ", " << result1.second << ")";
  
  std::cout << "\n\ny = sin(x), [1, 9]: \n";
  GlobalSearch globalSearch2(f2, 1, 9, 0.1);
  std::pair<double, double> result2 = globalSearch2.GlobalSearchAlgorithm();
  //globalSearch2.printAnasysisVector();
  std::cout << "Result: (" << result2.first << ", " << result2.second << ")";
  */
  std::cout << "\n\ny = sin(x), [1, 9]: \n";
  GlobalSearch globalSearch3(f3, 0, 20, 0.01, 30);
  std::pair<double, double> result3 = globalSearch3.GlobalSearchAlgorithm();
  //globalSearch3.printAnasysisVector();
  std::cout << "Result: (" << result3.first << ", " << result3.second << ")";

  return 0;
}