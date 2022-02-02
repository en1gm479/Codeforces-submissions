#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(LL i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
typedef long long int LL;


int main(){
	IOS;
	
	string str;
	cin>>str;
	unordered_set<char> st;
	rof(0,str.size(),1){
		st.insert(str[i]);

	}
	st.size()%2==0?cout<<"CHAT WITH HER!":cout<<"IGNORE HIM!";
	return 0;
}

