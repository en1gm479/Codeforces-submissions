#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,ct) for(int i=a;i<b;i+=ct)


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,sum=0,a[7],i=0;
    cin>>n;
    rof(0,7,1) cin>>a[i];
    while(sum<n){
    	if(i==7) i=0;
    	sum+=a[i];
    	// cout<<i<<" "<<sum<<" ";
    	i++;
    }
    cout<<i;
    
	return 0;
}