#include<bits/stdc++.h>
using namespace std;
void pattern(){
  for(int row=1; row<=5; row++)
  {
    for(int col=row;col>=1; col--)
    {
      cout<<col<<" ";
    }
    cout<<endl;
  }
}
int main(){
 
 pattern();
return 0;
}