#include <iostream>

int get_change(int m) {
  int n,rem;
  n=m/10;
  rem=m%10;
  n+=rem/5;
  rem=rem%5;
  n+=rem;
  //write your code here
  return n;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
