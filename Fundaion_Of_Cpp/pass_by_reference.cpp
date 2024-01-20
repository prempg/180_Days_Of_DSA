#include<bits/stdc++.h>
using namespace std;

  void Incr(int &n) //& pass by refernce
  {
    n++;
  }

int main(){
 int a=10;
 Incr(a);
 cout<<a;
return 0;
}