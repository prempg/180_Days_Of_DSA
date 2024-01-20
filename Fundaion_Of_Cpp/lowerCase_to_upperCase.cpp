#include<bits/stdc++.h>
using namespace std;

  char convert(char name)
  {
    char ans;
    ans= name-'a'+'A';
    return ans;
  }
int main(){
 char name;
 cout<<"Enter your Char: ";
 cin>>name;
 cout<<convert(name)<<endl;
return 0;
}