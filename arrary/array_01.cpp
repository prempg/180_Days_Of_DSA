#include<bits/stdc++.h>
using namespace std;

int main(){
  // first way
//  int vari[6]={5,3,6,1,9,7};
//  for(int i=0; i<6; i++)
//  {
//   cout<<vari[i]<<" ";
//  }

// second way
// int arr[6];
// for(int i=0; i<6; i++)
// cin>>arr[i];

// for(int i=0; i<6; i++)
// cout<<arr[i]<<" ";

// third way
int size;
cin>>size;
int arr[size];
for(int i=0; i<size; i++)
cin>>arr[i];
for(int i=0; i<size; i++)
cout<<arr[i]<<" ";


return 0;
}