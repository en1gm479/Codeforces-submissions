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
  int n;
  cin>>n;
  vector<int> v,y(n);
  rof(0,n,1) cin>>y[i];
  map<int,int> mpp;
  for(int i=n-1;i>=0;i--){
    if(mpp[y[i]]==0) {
      v.push_back(y[i]);
      mpp[y[i]]++;
    }
  }

  cout<<v.size()<<endl;
  for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
  return 0;
}
 