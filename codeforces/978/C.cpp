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
  ll n,m;
  cin>>n>>m;
  vector<ll> a(n+1,0),b(m);
  rof(1,n+1,1){
    ll x;
    cin>>x;
    a[i]=(a[i-1]+x);
  }

  // rof(0,m,1) cin>>b[i];

  ll x=0;
  for(ll i=0;i<m;i++){
    ll y;
    cin>>y;
    while(y>a[x]) x++;
    cout<<x<<" "<<y-a[x-1]<<endl;
  }


  return 0;
}
 