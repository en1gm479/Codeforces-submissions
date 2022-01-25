#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int ct=1;
	bool flag=false;
	string s;
	cin>>s;
	rof(1,s.size(),1){
		if(s[i]==s[i-1]){
			ct++;
		}
		else{
			ct=1;
		}
		if(ct>6){
			flag = true;
			break;
		}
	}
	flag?cout<<"YES":cout<<"NO";
	return 0;
}

