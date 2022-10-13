#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i=1, f=1;
cin>>n;

do{

    f = f*i;
    i++;
}while(i<=n);
cout<<f;
return 0;
};