#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(ll i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define ll long long int
const unsigned int mod = 1000000007;


int main(){
   IOS;
   int n,m;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   cin>>a[i];
   cin>>m;
   int b[m];
   for(int i=0;i<m;i++)
   cin>>b[i];
   int maxVal=0,maxCt=1;
   for(int i=m-1;i>=0;i--){
      for(int j=0;j<n;j++){
         if(b[i]%a[j]==0&&(b[i]/a[j])>=maxVal){
            if((b[i]/a[j])>maxVal)
            maxCt=1;
            else 
            maxCt++;
            maxVal=b[i]/a[j];
            }
         }
      }
   cout<<maxCt;
      
}

