// #include<bits/stdc++.h>
// using namespace std;

//   void Swap(int a, int b)
//   {
//     int c;
//     c=a;
//     a=b;
//     b=c;

//   }

// int main(){
//  int a,b;
//  cin>>a>>b;
//  Swap(a,b);
//  cout<<a<<" "<<b<<" ";
// return 0;
// }
#include<bits/stdc++.h>
using namespace std;

  void Swap(int &a, int &b)
  {
    int c;
    c=a;
    a=b;
    b=c;

  }

int main(){
 int a,b;
 cout<<"Enter 2 No: "<<endl;
 cin>>a>>b;
 Swap(a,b);
 cout<<a<<" "<<b<<" ";
return 0;
}