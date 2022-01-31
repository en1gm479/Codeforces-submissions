#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"

int main(){
	IOS;
	
	long long int n,j,t=0,curr=1;
	cin>>n>>j;
	rof(0,j,1){
		int k;
		cin>>k;
		if(curr<=k) t=t+k-curr;
		else t=t+n-curr+k;
		curr=k;
	}
	cout<<t;
	return 0;
}
