// A simple program that computes the square root of a number
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
  auto v = std::vector<double>{1, 2, 3, 4};
  for (auto &elem : v){
      std::cout << elem << ',';
  }

  std::cout << "hei" << std::endl;
  return 1;
}