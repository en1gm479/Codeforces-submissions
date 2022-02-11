#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(ll i=a;i<b;i+=count)
#define trav(a, x)  for(auto& a : x)
#define display(x) trav(a,x) cout<<a<<" ";cout<<endl;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define ll long long int
const unsigned int mod = 1000000007;


int main(){
   IOS;
   int t;
   cin>>t;
   while(t--){
      string s;
      cin>>s;
      bool chk=true;
      for(int i=s.size()-1;i>0;i--){
         int x=s[i]-'0';
         int y= s[i-1]-'0';
         if(x+y>9){
            chk = false;
            for(int j=0;j<s.size();j++){
               if(j==i-1){
                  cout<<x+y;
                  j++;
                  continue;
               }
               cout<<s[j];
            }
            break;
         }
      }

      if(chk){
         int x=s[0]-'0';
         int y = s[1]-'0';
         cout<<x+y;
         rof(2,s.size(),1)
         cout<<s[i];
      }
      cout<<endl;

   }

}

