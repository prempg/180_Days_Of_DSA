#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"Enter your no:";
  cin>>n;
 for(int i=2; i<n; i++)
 {
  if(n%i==0){
 cout<<"Not a prime: "<<endl;
  }
 else{
  cout<<"Prime NO"<<endl;
 }
 }
return 0;
}