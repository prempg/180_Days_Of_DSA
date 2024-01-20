#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 int rem, ans=0;
 int mul =1;
 cout<<"Enter your no: ";
 cin>>n;
 while(n>0){
  rem = n%10;
   n/=10;
  ans += rem*mul;
  // mul=mul*10;
  mul*=2;
 }
cout<<ans;

return 0;
}