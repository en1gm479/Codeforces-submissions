#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(ll i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define ll long long int
const unsigned int mod = 1000000007;


int main(){
   IOS;
   int k,n,w;
   cin>>k>>n>>w;
   ll tot_cost=0;
   rof(1,w+1,1){
      tot_cost+=(i*k);
   }
   tot_cost>n?cout<<tot_cost-n:cout<<0;

}

