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
  string s;
  cin>>s;
  int lx=1,ct=0;

  rof(1,n,1){
    if(s[i-1]=='x'&&s[i]=='x') lx++;
    else{
      if(lx>2) ct+=(lx-2);
      lx=1;
    }
  }
  if(lx>2) ct+=(lx-2);
  // ct = ct==0?0:ct;
  cout<< ct;
  return 0;
}
 