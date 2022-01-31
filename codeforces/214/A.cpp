#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"

int main(){
	IOS;
	
	int n,m,ct=0;
	cin>>n>>m;
	for(int i=0;i<33;i++){
		for(int j=0;j<33;j++){
			if(((i*i+j)==n)&&((i+j*j)==m)) {
				ct++;
				// cout<<i<<j;
			}
		}
	}
	cout<<ct;
	return 0;
}
