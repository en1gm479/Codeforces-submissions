#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(LL i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
typedef long long int LL;


int main(){
   IOS;
   int t;
   cin>>t;
   while(t--){
      LL n,x,y,sum=0;
      cin>>n>>x>>y;
      int a[n];
      sum+=x;
      rof(0,n,1){
         cin>>a[i];
         sum+=a[i];
      }
      bool chk1=sum&1;
      bool chk2=y&1;
      chk1==chk2?cout<<"Alice"<<endl:cout<<"Bob"<<endl;
   }
}