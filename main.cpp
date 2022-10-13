#include <iostream>
using namespace std;

int main() {
 short short_var {-32768};
 short int short_int {455};
 signed short sign_short {122};
 signed short int sign_short_int {-456};
 unsigned short int unsign_short_int {456};

 cout<<sizeof(short_var)<<endl;
 cout<<sizeof(short_int)<<endl;
 cout<<sizeof(sign_short)<<endl;
 cout<<sizeof(sign_short_int)<<endl;
 cout<<sizeof(unsign_short_int)<<endl;


  return 0;
}