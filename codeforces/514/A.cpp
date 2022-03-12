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
  string s,res;
  cin>>s;
  if(s[0]>'4' && s[0] != '9')
    res.push_back(char('0'+('9'-s[0])));
  else 
    res.push_back(s[0]);
  rof(1,s.size(),1){
    if(s[i]>'4')
    res.push_back(char('0'+('9'-s[i])));
  else 
    res.push_back(s[i]);
  }

  cout<<res;
  return 0;
}

