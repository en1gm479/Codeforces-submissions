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
  int min_ct,xpos,ypos;
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      int a;
      cin>>a;
      if(a==1){
        xpos=j+1;
        ypos=i+1;
      }
    }
  }

  cout<<abs(3-xpos)+abs(3-ypos);
  return 0;
}

