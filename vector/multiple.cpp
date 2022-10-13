#include <iostream>
using namespace std;

bool multiple(long long int num) {
  int remainder_d = num % 10;
  int _5d = remainder_d * 5;
  num = num / 10;
  num -= _5d;
  if (num != 0 && num % 17 == 0) return true;
  return false;
}

int main() {
  long long int num;
  while (true) {
    cin >> num;
    if (num == 0) break;
    bool result = multiple(num);
    cout << result << endl;
  }
  return 0;
}