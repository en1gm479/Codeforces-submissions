#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"

int main(){
	IOS;
	
	int n;
	cin>>n;
	if(n==0)
		cout<<0<<" "<<0<<" "<<0;
	else if(n==1)
		cout<<0<<" "<<0<<" "<<1;
	else{
		int a1=0,a2=1,l1=0;
		while(a1+a2!=n){
			l1=a1;
			int tmp=a2;
			a2=a1+a2;
			a1=tmp;
		}
		cout<<a1<<" "<<a1<<" "<<l1;}
	return 0;
}
