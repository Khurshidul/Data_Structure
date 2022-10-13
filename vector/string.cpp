#include <bits/stdc++.h>
using namespace std;

int main() {
  int num;
  cout << "Enter the number :";
  cin >> num;
  int sum = 0;
  do {
    if (num % 10 != 0) {
      int mod = num % 10;
      num = num / 10;
      sum = sum + mod;
    } else
      break;
    /* code */
  } while (num);

  cout << sum;

  return 0;
};