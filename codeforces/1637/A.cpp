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
      vector<int> v;
      int a;
      cin>>a;
      v.emplace_back(a);
      bool chk=true;
      rof(1,n,1){
         cin>>a;
         v.emplace_back(a);
         if(v[i-1]>v[i])
            chk=false;

      }
      !chk?cout<<"YES":cout<<"NO";
      cout<<endl;
   }
}

