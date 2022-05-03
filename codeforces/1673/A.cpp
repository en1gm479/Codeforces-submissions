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
    string s;
    cin>>s;
    int sz=s.size();
    if(sz==1) cout<<"Bob "<<s[0]-'a'+1;
    else{
      cout<<"Alice ";
      map<char,int>mpp;
      for(int i=0;i<26;i++)
        mpp[char('a'+i)]=i+1;
      if(sz%2==1){
      int bScore = min(s[0]-'a'+1,s[sz-1]-'a'+1);
      int aScore = max(s[0]-'a'+1,s[sz-1]-'a'+1);
      rof(1,sz-1,1){
        aScore+=mpp[s[i]];
      }
        cout<<aScore-bScore;
    }
      else{
        int aScore=0;
        rof(0,sz,1){
          aScore+=mpp[s[i]];
        }
          cout<<aScore;
      }

      }
      cout<<endl;
  }

  return 0;
}
 