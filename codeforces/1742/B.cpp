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

int cal(set<int> &rem,int k,int maxi){
  int tot=0;
  auto it=rem.begin();
  while(k--){
    tot+=(maxi-(*it));
    it++;
  }
  return tot;
}

int main(){
  IOS;
  test(){
    int n;
    cin>>n;
    vector<int> v(n);
    map<int,int> mpp;
    bool chk=1;
    rof(0,n,1) {
      cin>>v[i];
      mpp[v[i]]++;
      if(mpp[v[i]]>1) chk=0;
    }
    if(chk) cout<<"YES";
    else cout<<"NO";
    cout<<endl;


  }
  return 0;
}
 