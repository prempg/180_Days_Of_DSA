#include<bits/stdc++.h>
using namespace std;

  bool primeNum(int n)
  {
    if(n<2)
    return 0;

    for(int i=2; i<n; i++)
    {
      if(n%i==0)
      return 0;
    }
    return 1;
  }

  int fact(int m){
    int ans=1;
    for(int i=1; i<=m ;i++)
      ans=ans*i;
      return ans;
  }
int main(){
 int a,b;
 cout<<"Enter first no: "<<endl;
 cin>>a;
 
 cout<<"Enter second no: "<<endl;
 cin>>b;

  cout<<primeNum(a)<<endl;
  cout<<fact(a)<<endl;
  cout<<primeNum(b)<<endl;
  cout<<fact(b)<<endl;
  cout<<primeNum(b-a)<<endl;
  cout<<fact(b-a)<<endl;

return 0;
}