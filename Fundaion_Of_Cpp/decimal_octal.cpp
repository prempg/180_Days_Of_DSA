#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 int rem, ans=0;
 int mul =1;
 cout<<"Enter your no: ";
 cin>>n;
 while(n>0){
  rem = n%8;
   n/=8;
  ans += rem*mul;
  // mul=mul*10;
  mul*=10;
 }
cout<<ans;

return 0;
}