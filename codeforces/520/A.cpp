#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(LL i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
typedef long long int LL;


int main(){
	IOS;
	int n;
	cin>>n;
	string s;
	cin>>s;
	map<char,int> mpp;
	rof(0,n,1){
		if(isupper(s[i]))
			s[i]=tolower(s[i]);
		mpp[s[i]]++;
	}
	mpp.size()==26?cout<<"YES":cout<<"NO";

	return 0;
}
