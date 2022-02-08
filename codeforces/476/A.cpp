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
   int min_steps=n%2==0?n/2:(n/2)+1;
   int max_steps = n;
   while(min_steps<=max_steps){
      if(min_steps%m==0)
         break;
      min_steps++;
   }
   min_steps>max_steps?cout<<(-1):cout<<min_steps;

}

