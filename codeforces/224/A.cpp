#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"

int main(){
	IOS;
	long long int lb,bh,hl;
	cin>>lb>>bh>>hl;
	long long int lbh = sqrt(lb*bh*hl*1ll);
	int l = lbh*1ll/bh;
	int b = lbh*1ll/hl;
	int h = lbh*1ll/lb;
	cout<<4*(l+b+h);
	
	return 0;
}