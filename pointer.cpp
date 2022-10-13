#include <bits/stdc++.h>
using namespace std;

int main() {
  int x = 47;
  int* y = &x;
  cout << "The address of x = " << &x << endl;
  cout << "The value of x = " << *y << endl;

  return 0;
};