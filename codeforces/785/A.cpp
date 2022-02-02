#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(LL i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
typedef long long int LL;


int main(){
	IOS;
	int n,ct=0;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		if(s=="Tetrahedron") ct+=4;
		else if(s=="Cube") ct+=6;
		else if(s=="Octahedron") ct+=8;
		else if(s=="Dodecahedron") ct+=12;
		else if(s=="Icosahedron") ct+=20;
	}
	cout<<ct;
	return 0;
}

