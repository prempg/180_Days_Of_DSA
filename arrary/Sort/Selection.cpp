#include<bits/stdc++.h>
using namespace std;

int main(){
 int arr[6]={4,5,7,8,9,6};
 

 for(int i=0; i<5; i++)
 {
  int minimum=i;
  for(int j=i+1; j<6;j++)
  {
    if(arr[j]<arr[minimum])
      minimum=j;
    
  }
  swap(arr[i],arr[minimum]);
 }
 for(int i=0;i<6;i++){
 cout<<arr[i]<<" ";

 }
return 0;
}
