#include<bits/stdc++.h>
using namespace std;
void pattern(){
  for(int row=1; row<=5; row++)
  {
    for(int col=1;col<=row; col++)
    {
      cout<<"*"<<" ";
    }
    cout<<endl;
  }
}
int main(){
 
 pattern();
return 0;
}