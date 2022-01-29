#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"

long long int nChoosek( long long n, long long k )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    long long int result = n;
    for( int i = 2; i <= k; ++i ) {
        result *= (n-i+1)*1LL;
        result /= i*1LL;
    }
    return result;
}

int main(){
	IOS;

	int n;
	cin>>n;
	long long int a[n],mx=0,mx_ct=0,mn=INT_MAX,mn_ct=0;
	rof(0,n,1){
		cin>>a[i];
		if(a[i]>=mx){
			if(a[i]==mx)mx_ct++;
			else mx_ct=0;
			mx=a[i];
		}
		if(a[i]<=mn){
			if(a[i]==mn)mn_ct++;
			else mn_ct=0;
			mn=a[i];
		}
	}
	long long int pr;
	if(mx==mn){
		if(mn_ct==1&&mx_ct==1)
			pr=1;
		else
			pr=nChoosek(mx_ct+1,2);
	}
	else pr = (mx_ct+1)*(mn_ct+1)*1LL;
	cout<<mx-mn<<" "<<pr;
	// cout<<mx_ct<<" "<<mn_ct;
	return 0;
}
