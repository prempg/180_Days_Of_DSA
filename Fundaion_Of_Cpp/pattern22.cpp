#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"Enter your no";
  cin >>n;

 for(int row=1; row<=n; row++)
 {

  for(int  col=1; col<=n-row; col++)
  {
  cout<<"  ";

  }
  for(char name='A'; name<='A'+row-1; name++){
  cout<<name <<" ";

  }
  cout<<endl;

 }
return 0;
}