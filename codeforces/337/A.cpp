#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int n,m;
	cin>>n>>m;
	int a[m],min=INT_MAX;
	rof(0,m,1)cin>>a[i];
	sort(a,a+m);
	rof(n-1,m,1){
		if(a[i]-a[i-(n-1)]<min)
			min=a[i]-a[i-(n-1)];
	}
	cout<<min;
	return 0;
}