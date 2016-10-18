#include <iostream>
#include <fstream>
#include <bitset>
#include <cmath>

inline bool is_prime(unsigned long p) {
  if ((p % 2) == 0) {
    return false;
  }

  unsigned long psqrt = std::sqrt(p);
  for (unsigned long n = 3; n <= psqrt; n += 2) {
    if ((p%n) == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  //std::ifstream in("C:\\Users\\marci_000\\ClionProjects\\spoj\\test_data\\p2_prime1.txt");
  //std::cin.rdbuf(in.rdbuf());

  int count;
  std::cin >> count;
  unsigned long m, n;
  while (std::cin >> m >> n) {
    if (m == 1)
      m++;
    if (m == 2)
      std::cout << "2\n";
    if ((m % 2) == 0)
      m++;
    for (unsigned long k = m; k <= n; k+=2) {
      if (is_prime(k))
        std::cout << k << "\n";
    }
    std::cout << "\n";
  }
}
