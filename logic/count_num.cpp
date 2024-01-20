#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"Enter the number those you want to count : ";
  cin>>n;
 int count= 0;
 while(n!=0)
 {
  n=n/10;
  count=count+1;

 }
 cout<<count;

return 0;
}