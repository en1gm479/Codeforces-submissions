#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,ct) for(int i=a;i<b;i+=ct)


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int c;
    cin>>c;
    int min=c,order=1;
    bool flag=true;
    rof(2,n+1,1){
    	cin>>c;
    	if(c<min){
    		min=c;
    		order=i;
    		if(!flag) flag=true;
    	}
    	else if(c==min){
    		flag = false;
    	}
    }
    if(flag)cout<<order;
    else cout<<"Still Rozdil";
	return 0;
}
