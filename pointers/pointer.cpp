#include <bits/stdc++.h>
using namespace std;

int main() {
  int *pointer{nullptr};
  int var1{54};
  pointer = &var1;
  cout << *pointer << endl;
  int var2{32};
  pointer = &var2;

  cout << *pointer << endl;

  return 0;
};