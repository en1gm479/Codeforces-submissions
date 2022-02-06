#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(LL _i=a;_i<b;_i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
typedef long long int LL;

int main(){
   IOS;
   int n,m;
   cin>>n>>m;
   int ct=0;
   while(m*n!=0){
      m--;n--;
      ct++;
   }
   ct&1?cout<<"Akshat":cout<<"Malvika";
 
}