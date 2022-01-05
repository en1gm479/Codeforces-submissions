#include<bits/stdc++.h>
using namespace std;

int main(){
          int a,n,low_v,high_v,count=0;
          cin>>n;
          cin>>a;
          low_v=a;
          high_v=a;
          while(--n){
                   cin>>a;
                   if(a<low_v){
                             low_v=a;
                             count++;
                   }
                   if(a>high_v){
                             high_v=a;
                             count++;
                   }
          }
          cout<<count;
}