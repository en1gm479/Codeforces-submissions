#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,ct) for(int i=a;i<b;i+=ct)


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int a[n],b[n];
    rof(0,n,1){
    	cin>>a[i];
    	b[i]=a[i];
    }
    sort(b,b+n);
    if(b[0]==b[1])
    	cout<<"Still Rozdil";
    else{
    	rof(0,n,1){
    		if(a[i]==b[0]){
    			cout<<i+1;
    			break;
    		}
    	}
    }
	return 0;
}