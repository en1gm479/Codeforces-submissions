#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,ct) for(int i=a;i<b;i+=ct)


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int n,ct_0=0,ct_5=0;
	cin>>n;    
	while(n--){
		int a;
		cin>>a;
		if(a==5) ct_5++;
		else ct_0++;
	}
	if(ct_0>0 && ct_5>8){
		int k=ct_5/9;
		rof(0,k*9,1)
		cout<<5;
		rof(0,ct_0,1)
		cout<<0;
	}
	else if(ct_5<9 && ct_0>0) cout<<0;
	else cout<<(-1);
	return 0;
}