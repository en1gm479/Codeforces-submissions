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
  int a[n],min_e=INT_MAX,minpos=-1,max_e=INT_MIN,maxpos=-1;
  rof(0,n,1){
    cin>>a[i];
    if(a[i]>max_e){
      max_e=a[i];
      maxpos=i+1;
    }
    if(a[i]<=min_e){
      min_e=a[i];
      minpos=i+1;
    }

  }
  int tot_steps = maxpos-1+(n-minpos);
  maxpos>minpos?tot_steps--:tot_steps;
  cout<<tot_steps;

  return 0;
}

