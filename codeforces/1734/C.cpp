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
    string s;
    cin>>s;
    vector<int> ans(n+1,0);
    for(int i=n;i>0;i--){
      for(int j=i;j<=n;j+=i){
        if(s[j-1]=='1') break;
        ans[j]=i;
      }
    }
    long long res=0;
    for(int i=1;i<=n;i++)
      if(ans[i]!=0) res+=ans[i];
    cout<<res<<endl;
  }

  return 0;
}
 