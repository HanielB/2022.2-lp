#include <iostream>

int mult(int a = 1, int b = 2, int c = 3) { return a * b * c; }

int main()
{
  std::cout << mult(4, 5, 6) << std::endl;
  std::cout << mult(4, 5) << std::endl;
  std::cout << mult(5) << std::endl;
  std::cout << mult() << std::endl;
}
