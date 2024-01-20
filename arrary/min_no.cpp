#include<bits/stdc++.h>
using namespace std;

int main(){
  //int min
 int arr[5]={4,5,6,8,1};
 int ans=INT_MAX;

 for(int i=0; i<5; i++)
 if(arr[i]<ans)
 {
  ans=arr[i];
 }
 cout<<"Min value is: "<<ans<<endl;

 //int max
 int arr_2[5]={4,5,6,8,1};
 int ans_2=INT_MIN;

 for(int i=0; i<5; i++)
 if(arr_2[i]>ans_2)
 {
  ans_2=arr[i];
 }
 cout<<"Max value is: "<<ans_2<<endl;

return 0;
}