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

int nxt_prime(int x){
   while(true){
      x++;
      bool chk=true;
      for(int i=2;i*i<=x;i++){
         if(x%i==0){
            chk=false;
            break;
         }
      }
      if(chk) return x;
   }
}

int main(){
   IOS;
   int n;
   cin>>n;
   int x=2;
   while(n--){
      cout<<x<<" ";
      x = nxt_prime(x);
   }
}

