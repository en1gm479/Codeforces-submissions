#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(LL _i=a;_i<b;_i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
typedef long long int LL;

int main(){
   IOS;
   int n;
   cin>>n;
   vector<int> v1,v2;
   rof(0,n,1){
      int a,b;
      cin>>a>>b;
      v1.push_back(a);
      v2.push_back(b);
   }
   int ct=0;
   for(auto it:v1){
      auto found=count(v2.begin(),v2.end(),it);
      ct+=found;
   }
   cout<<ct;
}