#include<bits/stdc++.h>
using namespace std;

int main(){
 int n,sum=1;
 cout<<"Enter your num: ";
 cin>>n;
 for(int i=1; i<=n;i=i+1)
 {
  sum=sum*i;
 }
 cout<<sum<<endl;
return 0;
}