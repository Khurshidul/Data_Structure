#include<bits/stdc++.h>
using namespace std;
int main(){
int array[5] = {2,3,4,5};
int* pointer_arr = array;
// cout<<*pointer_arr+1;
int add_arr = *pointer_arr + *pointer_arr+3;
cout<<add_arr;

return 0;
};