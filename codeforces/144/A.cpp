#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"

int main(){
	IOS;

	int n,mx=0,mn=INT_MAX,mx_pox=-1,mn_pos=-1;
	cin>>n;
	rof(0,n,1){
		int a;
		cin>>a;
		if(a>mx){
			mx=a;
			mx_pox=i+1;
		}
		if(a<=mn){
			mn=a;
			mn_pos=i+1;
		}
	}
	// cout<<mx_pox<<" "<<mn_pos;
	int t=mx_pox-1+n-mn_pos;
	mx_pox>mn_pos?cout<<t-1:cout<<t;
	return 0;
}