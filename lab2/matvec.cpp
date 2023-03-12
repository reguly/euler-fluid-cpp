#include <cstdlib>
#include <iostream>
#include <ctime>
#include <vector>
#include <chrono>

int main() {
  typedef float real;
  std::srand(std::time(0));
#if 1
  constexpr int N = 10000;
#else
  int N;
  std::cin >> N;
#endif
  std::vector<real> matrix(N*N);
  std::vector<real> vector(N);
  std::vector<real> y(N);

  for (int i = 0; i < N; i++) {
    vector[i]  = (real)std::rand()/(real)RAND_MAX;
    for (int j = 0; j < N; j++) {
      matrix[i*N+j] = (real)std::rand()/(real)RAND_MAX;
    }
  }
  auto t1 = std::chrono::high_resolution_clock::now();
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      y[i] += matrix[i*N+j] * vector[j];
    }
  }
  auto t2 = std::chrono::high_resolution_clock::now();
  real sum = 0;
  for (int i = 0; i < N; i++)
    sum += y[i];
  std::cout << sum << std::endl;
  std::cout << "took "
              << std::chrono::duration_cast<std::chrono::milliseconds>(t2-t1).count()
              << " milliseconds\n";
  return 0;
}
