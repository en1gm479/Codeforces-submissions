#include<bits/stdc++.h>
using namespace std;
 

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b,c,d,sum=0;
    cin>>a>>b>>c>>d;
    if(a==b) sum++;
    if(a==c) sum++;
    if(a==d) sum++;
    if(b==c) sum++;
    if(b==d) sum++;
    if(c==d) sum++;
    if(sum==6) cout<<3;
    else if(sum==3) cout<<2;
    else cout<<sum;
	return 0;
}