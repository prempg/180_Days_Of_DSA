#include<bits/stdc++.h>
using namespace std;

int main(){

int first = 0;
int second = 1;
int next;

int n;
cout<<"Enter your number: ";
cin >>n;
for(int i=0; i<n; i++)
{
cout<<first<<endl;//0,1,1,2,3

  next= first+second;  //1 ,2,3,5,8
  first = second;//1,1,2,3,5
  second= next;//1,2,3,5,8

}
return 0;

}