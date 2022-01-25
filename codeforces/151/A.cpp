#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,ct) for(int i=a;i<b;i+=ct)


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int tot_drink = (k*l)/nl;
    int tot_slice = c*d;
    int tot_salt = p/np;
    int min = (tot_drink<=tot_slice&&tot_drink<=tot_salt)?tot_drink:(tot_slice<=tot_salt)?tot_slice:tot_salt;
	cout<<min/n;
	return 0;
}

