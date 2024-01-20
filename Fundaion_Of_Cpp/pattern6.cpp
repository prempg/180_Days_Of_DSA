#include<bits/stdc++.h>
using namespace std;

void pattern(){
  for(int row=1; row<=5; row++)
  {
    for(int col=1; col<=5; col++)
    {
      cout<<col*col<<" "; //row ya col dono me se koi bhi print karwa sakte ho
    }
    cout<<endl;
  }

}

int main(){
 pattern();
return 0;
}