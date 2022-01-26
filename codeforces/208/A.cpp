#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	string s;
	cin>>s;
	bool flag = false;
	rof(0,s.size(),1){
		if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
			{i+=2;
				if(flag) cout<<" ";
			continue;}
		else{
			if(!flag)flag = true;
		cout<<s[i];
		}
	}
	return 0;
}
