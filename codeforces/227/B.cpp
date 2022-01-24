#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
int hsh[N];
 
#define rof(a,b,ct) for(int i=a;i<b;i+=ct)


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int a[n];
    rof(0,n,1){
    	cin>>a[i];
    	hsh[a[i]]=i;
    }
    long long int m,sum_v=0,sum_p=0;
    cin>>m;
    rof(0,m,1){
    	int b;
    	cin>>b;
    	sum_v+=hsh[b]+1;
    	sum_p+=n-hsh[b];
    }
    cout<<sum_v<<" "<<sum_p;
    
	return 0;
}
