#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(LL _i=a;_i<b;_i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
typedef long long int LL;

bool palindrome(string s){
   rof(0,s.size()/2,1){
      if(s[_i]!=s[s.size()-_i-1])
         return false;
   }
   return true;
}

int main(){
   IOS;
   int t;
   cin>>t;
   while(t--){
      int n,k;
      cin>>n>>k;
      string s;
      cin>>s;
      if(k==0||palindrome(s))
         cout<<1<<endl;
      else
         cout<<2<<endl;

   }
}