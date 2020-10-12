#include <iostream>
#include "calculator.cpp"

int main() {
  std::cout << "Run Program" << std::endl;

  Lab::Calculator<int> calc;
  std::cout << "Add = " << calc.Add(8, 3) << std::endl;

  return 0;
}