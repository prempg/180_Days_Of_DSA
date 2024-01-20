#include<bits/stdc++.h>
using namespace std;

int main(){
 int number;
 cout << "Enter your number: " <<endl;
 cin >>number;
 if(number<0)
 {
  cout <<"Given no is negative No: "<<endl;
 }
 else if(number>0)
 {
  cout <<"Given no is Positive: "<<endl;
 }
 else{
  cout <<"Given no is 0: "<<endl;
 }
return 0;
}