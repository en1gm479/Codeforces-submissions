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
   string s1,s2;
   getline(cin,s1);
   getline(cin,s2);
   map<char,int> mpp;
   rof(0,s1.size(),1)
      mpp[s1[i]]++;
   bool chk=true;
   rof(0,s2.size(),1){
      if(s2[i]==' ') continue;
      if(mpp[s2[i]]==0) chk=false;
      else{
         mpp[s2[i]]--;
      }
   }
   chk?cout<<"YES":cout<<"NO";
}

