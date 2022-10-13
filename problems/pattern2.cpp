#include <bits/stdc++.h>
using namespace std;

int main() {
  int rows, columns, n;
  cout << "Enter the number = ";
  cin >> n;
  cout << endl;
  for (rows = 1; rows <= n; rows++) {
    for (columns = 1; columns <= n; columns++) {
      if (rows == 1 || rows == n) {
        cout << "*";
      } else if (columns == 1 || columns == n) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;
};