#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(ll i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define ll long long int
const unsigned int mod = 1000000007;


int main(){
   IOS;
   string s;
   cin>>s;
   ll pivot_idx=0,sum_left=0,sum_right=0;
   vector<pair<ll,ll>> v;
   rof(0,s.size(),1){
      if(isalnum(s[i])){
         ll dig = s[i]-'0';
      if(pivot_idx){
         sum_right+=(dig*1LL*(i-pivot_idx));
      }
      else{
         pair<ll,ll> p={dig,i};
         v.push_back(p);
      }

      }
      if(s[i]=='^')
         pivot_idx=i;
   }
   for(auto it:v){
      sum_left+=(it.first*1LL*(pivot_idx-it.second));
   }
   if(sum_left==sum_right) cout<<"balance";
   else if(sum_left>sum_right) cout<<"left";
   else cout<<"right";
}

