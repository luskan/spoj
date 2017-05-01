#include <iostream>
#include <fstream>
#include <vector>
#include <stack>
#include <limits>

void onp(std::string& sline) {
  char a, c, tmp;
  std::cin >> c;
  if (c == '\n')
    return;
  if ( c == '(') {
    onp(sline);
    std::cin >> a; // should be always an op.
    onp(sline);
    std::cin >> tmp; // always )
    sline += a;
  }
  else
    sline += c;
}

int main() {
  //std::ifstream in("../test_data/p4.txt");
  //std::cin.rdbuf(in.rdbuf());

  int exp_count{0};
  std::cin >> exp_count;

  std::vector<std::string> data_out;

  for (int n =0; n < exp_count; ++n) {
    std::string line;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    onp(line);
    data_out.push_back(std::move(line));
  }

  for (auto res : data_out) {
    std::cout << res << "\n";
  }
}