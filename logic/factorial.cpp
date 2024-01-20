#include<bits/stdc++.h>
using namespace std;

int main(){
 int ans =1;
 int n;
 cout<<"Enter your no: ";
 cin>>n;
 for(int i=1; i<=n; i=i+1)
 {
  ans= ans*i;
 }
 cout<<ans;
return 0;
}