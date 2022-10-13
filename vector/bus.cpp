#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, n, a, b;
  cout<<"Enter the test case : ";
  cin >> t;
  for (int i = 1; i <= t; i++) {
    int s = 0, m = 0;
    cin >> n;
    for (int j = 0; j < n - 1; j++) {
      cin >> a >> b;
      s = s + a - b;
      m = max(m, s);
    }
    cout << "case " << i << ":" << m << endl;
    ;
  }
}