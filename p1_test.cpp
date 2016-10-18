#include <iostream>
#include <fstream>

int main() {
  //std::ifstream in("p1.txt");
  //std::cin.rdbuf(in.rdbuf());

  int data;
  while (std::cin >> data) {
    if ( data == 42 )
      break;
    std::cout << data << "\n";
  }
}