#include<bits/stdc++.h>
using namespace std;
void pattern(){
  for(char row=1; row<=5; row++)
  {
    for(char col=1;col<=5-(row-1); col++)
    {
      cout<<row<<" ";
    }
    cout<<endl;
  }
}

void pattern1(){
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
 pattern1();

return 0;
}