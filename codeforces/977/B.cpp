#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
typedef long long LL;


int main(){
	IOS;
	
	int n;
	cin>>n;
	string s,maxi,x;
	cin>>s;
	unordered_map<string,int> mpp;
	rof(1,s.size(),1){
		x.clear();
		x+= s[i-1];
		x+=s[i];
		mpp[x]++;
		if(mpp[x]>mpp[maxi])
			maxi = x;
	}
	cout<<maxi;
	return 0;
}
