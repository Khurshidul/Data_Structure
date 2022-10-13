#include <iostream>
#include <cmath>
using namespace std;

long long int maximum(long long int a, long long int b, long long int c) {
  long long int axb = a * b;
  long long int bxc = b * c;
  long long int a_b = a + b;
  long long int b_c = b + c;

  long long int a_bxc = a + bxc;
  long long int axb_c = a * b_c;
  long long int axbxc = a * bxc;
  long long int a_b_xc = a_b * c;

  return max(max(a_bxc, axb_c), max(axbxc, a_b_xc));
}

int main() {
  long long int a, b, c;

  cin >> a >> b >> c;
  long long int result = maximum(a, b, c);
  cout << result << endl;

  return 0;
}