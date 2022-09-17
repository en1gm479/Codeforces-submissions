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
  test(){
    int n;
    cin>>n;
    int a=1,b,c;
    n-=1;
    if(n%2==0){
      b=n/2+1;
      if(b%2==0) b+=1;
    } 
    else b=n/2;
    c=n-b;
    cout<<c<<" "<<b<<" "<<a<<endl;
  }

  return 0;
}
 