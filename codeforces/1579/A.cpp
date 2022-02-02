#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(LL i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
typedef long long int LL;


int main(){
	IOS;
	int n,ctb=0,ctac=0;
	cin>>n;
	while(n--){
		ctb=0,ctac=0;
		string s;
		cin>>s;
		rof(0,s.size(),1){
			if(s[i]=='B') ctb++;
			else ctac++;
		}
		ctb==ctac?cout<<"YES":cout<<"NO";
		cout<<endl;
	}
	return 0;
}
