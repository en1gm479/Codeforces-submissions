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
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int diff_ct=0,ct=0;
    vector<int> v;
    while(n){
      int x=n%10;
      if(x!=0){
        diff_ct++;
        v.push_back(x*pow(10,ct));
      }
      ct++;
      n/=10;
    }
    cout<<diff_ct<<endl;
    display(v);
  }
  return 0;
}

