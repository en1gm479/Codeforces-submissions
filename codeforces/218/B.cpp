#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"

int main(){
	IOS;

	int m,n;
	cin>>n>>m;
	int a[m],b[m];
	rof(0,m,1) {
		cin>>a[i];
		b[i]=a[i];
	}
	int min=0,max=0;
	rof(0,n,1){
		sort(a,a+m);
		max+= a[m-1];
		a[m-1]--;
		// cout<<max<<" ";
	}
	int j=0;
	rof(0,n,1){
		sort(b,b+m);
		min+= b[j];
		b[j]--;
		if(b[j]==0)j++;
	}
	cout<<max<<" "<<min;
	return 0;
}

