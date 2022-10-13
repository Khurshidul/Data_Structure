#include <bits/stdc++.h>
using namespace std;

int main() {
  int row, colums, n;
  cin>>n;
  for (row = 1; row <= n; row++) {
    for (colums = 1; colums <= n - 3; colums++) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
};