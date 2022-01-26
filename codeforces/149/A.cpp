#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int k;
	cin>>k;
	int a[12],sum=0,ct=0;
	rof(0,12,1)cin>>a[i];
	sort(a,a+12);
	int j=11;
	while(k>sum && j>=0){
		ct++;
		sum+=a[j];
		j--;
	}
	if(j<0 && sum<k)cout<<(-1);
	else
	cout<<ct;
	return 0;
}