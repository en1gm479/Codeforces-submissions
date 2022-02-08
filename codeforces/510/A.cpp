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
   cin>>n>>m;
   bool pt = true;
   for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
         if(i%2==0){
            cout<<"#";
         }
         else{
            if(pt){
               if(j==m-1){
                  cout<<"#";
                  pt=false;
                  continue;
               }
               cout<<".";
            }
            else{
               if(j==0){
                  cout<<"#";
                  continue;
               }
               cout<<".";
               if(j==m-1)
               pt=true;
            }
         }
      }
      cout<<endl;
   }
}

