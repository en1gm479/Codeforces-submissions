#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,ct) for(int i=a;i<b;i+=ct)


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m,j=0,sum=0;
    cin>>n>>m;
    int a[n];
    rof(0,n,1){
    	cin>>a[i];
    }
    sort(a,a+n);
    while(a[j]<0 && j<m)
    {
    	sum+=abs(a[j]);
    	j++;
    }
    cout<<sum;
    
	return 0;
}