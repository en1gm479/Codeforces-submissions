#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"

int main(){
	IOS;

	int n,a,b;
	cin>>n>>a>>b;
	cout<<min(n-a,b+1);
	return 0;
}
