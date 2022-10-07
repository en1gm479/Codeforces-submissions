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
    int n;
    cin>>n;
    vector<int> a(n);
    rof(0,n,1) cin>>a[i];
    sort(a.begin(),a.end());
    if(a[0]==1) {
      int ans=0;
      rof(0,n,1) ans+=(a[i]-1);
      cout<<ans<<endl;
    }
    else{

        // display(a);
        int maxL = 2*a[0]-1;
        int ct=0;
        for(int i=0;i<n;i++){
          if(a[i]%maxL==0) ct--;
          ct+=(a[i]/maxL);
        }
        cout<<ct<<endl;
      }
    }

  return 0;
}
 