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
    int n,m;
    cin>>m>>n;
    int x_=(m-1),y_=(n-1);
    if(x_==0&&y_==0) cout<<0;
    else if((x_==0||y_==0)&&(x_>1||y_>1)) cout<<-1;
    // else if()
    else{
      ll res;
      res=(min(x_,y_))*2;
      int tmp = (max(x_,y_)-min(x_,y_));
      // cout<<res<<" "<<tmp<<" ";
      if(tmp%2==0){
        res+=((tmp/2)*3+tmp/2);
      }
      else{
        res+=(((tmp/2)+1)*1+(tmp/2)*3);
      }
      cout<<res;
    }
    cout<<endl;

 
  }
  return 0;
}
 