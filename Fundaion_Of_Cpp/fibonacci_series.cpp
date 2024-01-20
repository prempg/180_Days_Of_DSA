#include<bits/stdc++.h>
using namespace std;

int main(){
 int last=0;
 int pre=1;
 int curr;
 int n;
 cout<<"Enter your fibonacci series no: ";
 cin>>n;
 for(int i=0; i<n;i++)
 {
  cout<<last<<endl;
  curr=last+pre;
  last=pre;
  pre=curr;
 }
//  cout<<curr<<endl;
return 0;
}