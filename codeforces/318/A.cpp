#include<bits/stdc++.h>
using namespace std;
 
// #define rof(a,b,ct) for(int i=a;i<b;i+=ct)


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int n,k,ans;
    cin>>n>>k;
    if(n%2==0){
    	if(k<=n/2){
    		ans = 1LL*k*2-1;
    	}
    	else{
    		long long int i=k-n/2;
    		ans = 1LL*i*2;
    	}
    }
    else{
    	if(k<=n/2+1){
    		ans = 1LL*k*2-1;
    	}
    	else{
    		long long int i=k-(n/2+1);
    		ans=1LL*i*2;
    	}
    }
    cout<<ans;
	return 0;
}
