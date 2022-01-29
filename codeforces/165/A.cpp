#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"

int main(){
	IOS;
int n,tot_ct=0;
	cin>>n;
	int a[n][2];
	rof(0,n,1) cin>>a[i][0]>>a[i][1];
	rof(0,n,1){
		int ct1=0,ct2=0,ct3=0,ct4=0;
		for(int j=0;j<n;j++){
			if(i==j)continue;
			if(a[i][0]>a[j][0]&&a[i][1]==a[j][1]&&ct1==0) {ct1++;continue;}
			if(a[i][0]<a[j][0]&&a[i][1]==a[j][1]&&ct2==0) {ct2++;continue;}
			if(a[i][1]>a[j][1]&&a[i][0]==a[j][0]&&ct3==0) {ct3++;continue;}
			if(a[i][1]<a[j][1]&&a[i][0]==a[j][0]&&ct4==0) {ct4++;continue;}
		}
		if(ct1&&ct2&&ct3&&ct4)tot_ct++;
		// cout<<tot_ct;
	}
	cout<<tot_ct;

	return 0;
}
