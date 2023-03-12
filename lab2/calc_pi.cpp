#include <random>
#include <iostream>
#include <vector>
#include <chrono>
#include <algorithm>
 
#include <iostream>
 
int main()
{
  //This is how we do timing with C++11
  std::chrono::time_point<std::chrono::system_clock> start, end;
  start = std::chrono::system_clock::now();
  //This is how we generate random numbers with C++11
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_real_distribution<double> dis(0.0, 1.0);
  double x = dis(gen);
  //End timing
  end = std::chrono::system_clock::now();
  std::chrono::duration<double> elapsed_seconds = end-start;
  std::cout << "Runtime: " << elapsed_seconds.count() << "s\n";
}
