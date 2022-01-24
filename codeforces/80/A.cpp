#include<bits/stdc++.h>
using namespace std;
 
bool check_prime(int n){
	for(int i=2;i*i<=n;i++)
		if(n%i==0)
			return true;
	
	return false;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cout<<check_prime(11)<<" ";
    int n,m,res=1;
    cin>>n>>m;
    while(res){
    	n++;
    	res = check_prime(n);
    	// cout<<n;
    }
    // cout<<n;
    if(n==m) cout<<"YES";
    else cout<<"NO";
    
	return 0;
}