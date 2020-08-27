#include "cpplib.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#include "limits"
std::string CPPLib::PrintHelloWorld() { return "**** Hello World ****"; }
std::string CPPLib::PrintIntro() { 
  string line;
  ifstream myfile ("/Users/max/Desktop/EE599/EE559_Lab1/pikachu.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line))
    {
      cout << line << '\n';
    }
    myfile.close();
  }
  return "**** Self-Introdction ****\n"
          "Name: Hong-Shuo Chen\n" 
          "Major: EE\n"
          "Hobby: Cooking\n";
}


// Calculates the Nth Fibonacci number
int CPPLib::fib(int N) {
  if (N == 0) {
    return 0;
  }

  if (N == 1) {
    return 1;
  }

  return fib(N - 1) + fib(N - 2);
}

int CPPLib::FindMax(const std::vector<int> &inputs) {
  int result = std::numeric_limits<int>::min();
  for (auto n : inputs) {
    if (n > result) {
      result = n;
    }
  }
  return result;
}
