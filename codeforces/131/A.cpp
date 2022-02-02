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
	bool flag=true;
	rof(1,str.size(),1){
		if(!(str[i]>='A'&&str[i]<='Z'))
				flag=false;
	}
	if(flag){
		char x;
		rof(0,str.size(),1)
		{
			// cout<<str[i];
			if(str[i]>='A'&&str[i]<='Z')
				 x='a'+(str[i] - 'A');
			else
				 x='A'+(str[i] - 'a');
			cout<<x;
		}
	}
	else
		cout<<str;
	return 0;
}

