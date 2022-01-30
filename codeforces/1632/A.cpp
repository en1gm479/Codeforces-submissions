#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"

int main(){
	IOS;
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		if(n>=3)cout<<"NO"<<endl;
		else if(n==1) cout<<"YES"<<endl;
		else{
			if(s[0]==s[1])cout<<"NO"<<endl;
			else cout<<"YES"<<endl;
		}
	}
	return 0;
}

