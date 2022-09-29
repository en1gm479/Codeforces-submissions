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
  test(){
    int n,m;
    cin>>n>>m;
    if(n<=3&&m<=3){
        if(n==3&&m==3) cout<<2<<" "<<2;
        else if(min(n,m)==2&&max(n,m)==3) cout<<2<<" "<<2;
        else cout<<1<<" "<<1; 
    }
    else{
      cout<<1<<" "<<1;
    }
    cout<<endl;
  }

  return 0;
}
 