#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int l0=0,r0=0,l1=0,r1=0;
	while(n--){
		int l,r;
		cin>>l>>r;
		l==0?l0++:l1++;
		r==0?r0++:r1++;
		}
		cout<<min(l0,l1)+min(r0,r1);
		
	return 0;
}