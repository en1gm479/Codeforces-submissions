#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	string s;
	cin>>s;
	int ct=0;
	rof(0,s.size(),1){
		if(ct==0){
			if(s[i]=='h') ct=1;
		}
		else if(ct==1)
			{if(s[i]=='e') ct=2;}

		else if(ct==2)
			{if(s[i]=='l') ct=3;}

		else if(ct==3)
			{if(s[i]=='l') ct=4;}

		else if(ct==4)
			{if(s[i]=='o')
			ct=5;
			 // break;
		}
 		// cout<<i<<":"<<ct<<" "<<s[i]<<" ";
	}
	ct==5?cout<<"YES":cout<<"NO";
	return 0;
}