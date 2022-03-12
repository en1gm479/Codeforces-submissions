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
  bool chk=false;
  int maxs=0;
  vector<string> v;
  rof(0,n,1){
    if(s[i]=='(') chk=true;
    if(s[i]==')') chk=false;

    if(chk){
      string str="";
      while(isalpha(s[i])){
        str.push_back(s[i]);
        i++;
      }
      
      if(str!=""){
        v.push_back(str);
      i--;
      } 
    }
    else{
      int len=0;
      while(isalpha(s[i])){
        len++;
        i++;
      }
      if(len!=0) i--;
      if(len>maxs) maxs=len;
    }
  }
  // display(v);
  cout<<maxs<<" "<<v.size();
  return 0;
}

