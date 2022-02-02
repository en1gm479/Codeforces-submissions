#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(LL i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
typedef long long int LL;


int main(){
	IOS;
	int n,ct=0;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		rof(0,s.size(),2)
			cout<<s[i];
		if(s.size()%2==0)
			cout<<s[s.size()-1];
		cout<<endl;
	}
	return 0;
}

