#include<bits/stdc++.h>
using namespace std;

void pattern(){
  int count =1;
  for(int row=1; row<=5; row++)
  {
    for(int col=1; col<=5; col++)
    {
      cout<<count<<" "; //row ya col dono me se koi bhi print karwa sakte ho
      count++;
    }
    cout<<endl;
  }

}

int main(){
 pattern();
return 0;
}