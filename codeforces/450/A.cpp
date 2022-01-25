#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,ct) for(int i=a;i<b;i+=ct)


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m,max=0,max_p=0;
    cin>>n>>m;
    int a[n];
    rof(0,n,1){
    	cin>>a[i];
    	if(a[i]>m)
    		{
    			int b = a[i]/m;
    			b = a[i]%m!=0?b+1:b;
    			// cout<<i<<":"<<b<<" ";
    			if(b>=max){
    				max=b;
    				max_p=i;
    			}
    		}
    }
    max==0?cout<<n:cout<<max_p+1;
    
	return 0;
}