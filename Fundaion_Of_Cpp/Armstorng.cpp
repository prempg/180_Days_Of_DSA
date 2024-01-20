#include<bits/stdc++.h>
using namespace std;

int CountDigit(int num)
{
  int count =0;
  while (num)
  {
    count++;
    num/=10;
  }
    return count;
  
}

bool Armstorng(int num, int digit)
{
  int n=num,rem,ans=0;
  while(n){
    rem=n%10;
    n/=10;
    ans=ans+ pow(rem, digit);
  }
  if(ans==num)
  return 1;
  else
  return 0;
}

int main(){
 int num;
 cout<<"Enter your num: "<<endl;
 cin>>num;
 // Count digit
 int digit = CountDigit(num);
 //find Armstorng
cout<<Armstorng(num, digit)<<endl;

 return 0;
}