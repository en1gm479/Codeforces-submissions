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
   bool chk=true;
   rof(0,s.size(),1){
      if(chk&&s[i]=='0'){
         chk=false;
         continue;
      }
      if(i==s.size()-1&&chk)
         continue;
      cout<<s[i];
   }

      
}

