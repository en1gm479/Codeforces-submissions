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
   vector<int> v;
   rof(0,n,1){
      int a;
      cin>>a;
      v.push_back(a);
   }
   sort(v.begin(),v.end());
   int sum=0,ct=0;
   while(sum<=accumulate(v.begin(),v.end(),0)){
      sum+=v[v.size()-1];
      v.pop_back();
      ct++;
   }
   cout<<ct;
 
}