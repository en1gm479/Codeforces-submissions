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
   int a[10000],j=0;
   rof(0,10000,1){
      if((i%3!=0)&&(i%10!=3))
         a[j++]=i;
   }
   while(t--){
      int n;
      cin>>n;
      cout<<a[n-1]<<endl;
   }
   return 0;
}

