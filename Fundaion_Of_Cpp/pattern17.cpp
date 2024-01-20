#include<bits/stdc++.h>
using namespace std;
void pattern1(){
  for(char row=5; row>=1;row--)
  {
    for(char col=1;col<=row; col++)
    {
      cout<<row<<" ";
    }
    cout<<endl;
  }
}



int main(){
 
 pattern1();
//  pattern();

return 0;
}