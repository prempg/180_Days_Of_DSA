#include<bits/stdc++.h>
using namespace std;

int main(){
 int num ,temp ;
 int reverseNum=0;
 cout<<"Enter your no :";
 cin>>num;
 temp=num;
 while(num>0)
 {
  int lastDigit = num%10;
  num = num/10;
  reverseNum= reverseNum*10+lastDigit;
 }
if(reverseNum==temp)
{
  cout<<"Palindrome no: ";
}else{
  cout<< "Not a palindrome: ";
}

return 0;
}