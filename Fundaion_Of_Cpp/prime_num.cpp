#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cout<<"Enter your num: ";
 cin>>n;
 if(n<2)
 {
  cout<<"Not Prime! ";
  return 0;
 }
 for(int i=2;i<=n; i=i+1)
 {
  if(n%i==0)
  { 
    cout<<"Not Prime!";
    return 0;
  }
 
 }
  cout<<"Prime Num";
return 0;
}