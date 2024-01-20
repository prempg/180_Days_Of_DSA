#include<bits/stdc++.h>
using namespace std;

int main(){
 int arr[6]={1,2,3,4,5,6};
 int tem[6];
 int rem , ans=0;
 for(int i=0; i<6; i++)
 {
  rem=arr[i]%10;
  arr[i]/10;
  tem[6]=ans*10+arr[i];
 }
 cout<<tem[6]<<" ";
return 0;
}