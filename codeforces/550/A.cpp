#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(LL i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
typedef long long int LL;


int main(){
	IOS;
	
	string str,x;
	cin>>str;
	set<int> st1,st2;
		rof(1,str.size(),1){
		x.clear();
		x+=str[i-1];
		x+=str[i];
		if(x=="AB")st1.emplace(i);
		if(x=="BA")st2.emplace(i);
	}
	if(st1.size()!=0&&st2.size()!=0){
	int idx00 = *(st1.begin());
	int idx01 = *(--st1.end());
	int idx10 = *(st2.begin());
	int idx11 = *(--st2.end());
	// cout<<idx00<<idx01<<idx10<<idx11;
	if(((idx00!=idx11-1)&&(idx00!=idx11+1))||((idx01!=idx10+1)&&(idx01!=idx10-1)))
		cout<<"YES";
	else
		cout<<"NO";
	}
	else
	cout<<"NO";
	return 0;
}
