#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,ct) for(int i=a;i<b;i+=ct)


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int a[n],min=INT_MAX,min_p=-1;;
    cin>>a[0];
    rof(1,n,1){
    	cin>>a[i];
    	if(abs(a[i]-a[i-1])<min){
    		min=abs(a[i]-a[i-1]);
    		min_p=i;
    	}
    }
    if(abs(a[n-1]-a[0])<min){
    		min=abs(a[n-1]-a[0]);
    		min_p=0;
    	}
    min_p==0?cout<<min_p+1<<" "<<n:cout<<min_p<<" "<<min_p+1;
	return 0;
}
