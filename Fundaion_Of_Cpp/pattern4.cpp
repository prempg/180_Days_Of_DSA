#include<bits/stdc++.h>
using namespace std;

void pattern(){
  for(int row=5; row>=1; row =row-1)
  {
    for(int col=5; col>=1; col=col-1)
    {
      cout<<col<<" "; //row ya col dono me se koi bhi print karwa sakte ho
    }
    cout<<endl;
  }

}

int main(){
 pattern();
return 0;
}