#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"

int main(){
	IOS;
	int t,stx,sty,edx,edy,flag=0;
	cin>>t>>stx>>sty>>edx>>edy;
	string s;
	cin>>s;
	rof(0,s.size(),1){
		if(s[i]=='N'&&edy>sty)sty++;
		else if(s[i]=='S'&&edy<sty)sty--;
		else if(s[i]=='E'&&stx<edx)stx++;
		else if(s[i]=='W'&&edx<stx)stx--;
		// cout<<stx<<" "<<sty<<endl;
		if(stx==edx&&edy==sty){
			flag=i+1;
			break;
		}
	}
	if(!flag) cout<<(-1);
	else cout<<flag;
	
	return 0;
}
