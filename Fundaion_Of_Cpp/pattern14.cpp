#include<bits/stdc++.h>
using namespace std;
void pattern(){
  for(char row=97; row<=101; row++)
  {
    for(char col=97;col<=row; col++)
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