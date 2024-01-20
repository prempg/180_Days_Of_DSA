#include<bits/stdc++.h>
using namespace std;

int main(){
 int num  ;
 int reverseNum=0;
 cout<<"Enter your no :";
 cin>>num;
 while(num>0)
 {
  int lastDigit = num%10;
  num = num/10;
  reverseNum= reverseNum*10+lastDigit;
 }
 cout<<reverseNum;

return 0;
}