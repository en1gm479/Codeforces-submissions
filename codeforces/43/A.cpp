#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"

int main(){
	IOS;

	int n;
	cin>>n;
	int ct1=0,ct2=0;
	string s,s1,s2;
	cin>>s;
	ct1++;
	s1=s;
	n--;
	while(n--){
		cin>>s;
		if(s==s1)ct1++;
		else{
			s2=s;
			ct2++;
		}
	}
	ct1>ct2?cout<<s1:cout<<s2;
	return 0;
}
