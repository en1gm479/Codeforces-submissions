#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(ll i=a;i<b;i+=count)
#define trav(a, x)  for(auto& a : x)
#define display(x) trav(a,x) cout<<a<<" ";cout<<endl;
#define test() int t; cin>>t; while(t--)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define ll long long int
const unsigned int mod = 1000000007;


int main(){
  IOS;
  int a[3],res1=INT_MAX;
  cin>>a[0]>>a[1]>>a[2];
  rof(0,101,1){

    int res2 = abs(i-a[0])+abs(i-a[1])+abs(i-a[2]);
    res1 = min(res1,res2);
  }
  cout<<res1;
  return 0;
}

