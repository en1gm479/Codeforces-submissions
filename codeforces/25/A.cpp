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
   vector<pair<int,int>> veven,vodd,vfinal;
   rof(0,n,1){
      int a;
      cin>>a;
      pair<int,int> p={a,i};
      if(a%2==0)
         veven.push_back(p);
      else
         vodd.push_back(p);
   }
   vfinal=vodd.size()>veven.size()?veven:vodd;
   for(auto it:vfinal)
      cout<<it.second+1;
}

