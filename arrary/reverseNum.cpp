#include<bits/stdc++.h>
using namespace std;

int main(){
int revNum[6]={3,6,9,2,5,8};
int start =0, end =5;
while(start<end)
{
  swap(revNum[start], revNum[end]);
  start++;
  end--;
};
for(int i=0; i<=5; i++){
cout<<revNum[i]<<" ";

}
return 0;
}