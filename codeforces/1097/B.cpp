#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(LL _i=a;_i<b;_i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
typedef long long int LL;

int main(){
   IOS;
   int n;
   cin>>n;
   int a[n];
   rof(0,n,1) cin>>a[_i];
   bool f=false;
   rof(0,1<<n,1){
      int sum=0;
      for(int j=0;j<n;j++){
         if(_i&(1<<j))
            sum+=a[j];
         else
            sum-=a[j];
      }
      if(sum%360==0){
         f=true;
         break;
      }
   }
   f?cout<<"YES":cout<<"NO";

 
}
