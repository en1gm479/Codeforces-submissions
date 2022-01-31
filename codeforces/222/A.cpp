#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"

int main(){
	IOS;
	
	int n,k,ch=0;
	cin>>n>>k;
	int a[n+1];
	bool fl = true;
	rof(1,n+1,1){
		cin>>a[i];
		if(i==k) ch=a[i];
		if(i>=k&&a[i]!=ch) fl = false;

	}

	int ct=0;
	if(fl){
		for(int i=n;i>0;i--)
			{if(a[i]!=ch)break;
			ct++;
		}
		cout<<n-ct;
	}
	else cout<<(-1);
	return 0;
}

