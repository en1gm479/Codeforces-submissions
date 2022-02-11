#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(ll i=a;i<b;i+=count)
#define trav(a, x)  for(auto& a : x)
#define display(x) trav(a,x) cout<<a<<" ";cout<<endl;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define ll long long int
const unsigned int mod = 1000000007;


int main(){
   IOS;
   int t;
      string s;
      cin>>s;
      int ct=0,x,y,z;
      char curr='a';
      rof(0,s.size(),1){
         x=abs(curr-s[i]);
         y=abs(s[i]-'a')+abs('z'-curr)+1;
         z=abs(curr-'a')+abs('z'-s[i])+1;
         ct+=min(x,min(y,z));
         curr=s[i];
      }
      cout<<ct<<endl;

}

