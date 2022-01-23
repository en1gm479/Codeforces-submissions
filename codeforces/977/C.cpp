#include<bits/stdc++.h>
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    	cin>>a[i];
    sort(a,a+n);

    if(k==0){
    	if(a[0]==1)
    		cout<<(-1);
    	else
    		cout<<1;
    }
    else if(n==1){
    	cout<<a[k-1];
    }
    else if(a[k-1]!=a[k])
    	cout<<a[k-1];
    else
    	cout<<(-1);

	return 0;
}