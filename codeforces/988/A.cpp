#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(LL _i=a;_i<b;_i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
typedef long long int LL;

int main(){
   IOS;
   
   map<int,int> mpp;
   int n,k;
   cin>>n>>k;
   rof(0,n,1){
   	int a;
   	cin>>a;
   	mpp[a]=_i;
   }
   if(mpp.size()>=k){
   	cout<<"YES"<<endl;
   	int ct=0;
   	for(auto it:mpp){
   		cout<<it.second+1<<" ";
   		ct++;
   		if(ct==k)
   			break;
   	}
   }
   	else cout<<"NO";
  
   return 0;
}