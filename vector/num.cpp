#include <bits/stdc++.h>
using namespace std;
void display(int num2) {
  int d2 = 0;
  while (num2) {
    if (num2 % 10 != 0) {
      int d = num2 % 10;
      num2 = num2 / 10;
      d2 = d2 + d;
    } else
      break;
  }
  cout << d2;
}
int main() {
  int num;
  cout << "Enter the number : ";
  cin >> num;
  display(num);

  return 0;
};