#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[7],sum=0,i=0;
	for(int j=0;j<7;j++)
	cin>>a[j];
	while(sum<n){
		if(i==7) i=0;
		sum+=a[i++];
		}
		cout<<i;
		
	return 0;
}