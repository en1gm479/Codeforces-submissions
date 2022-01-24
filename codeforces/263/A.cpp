#include<bits/stdc++.h>
using namespace std;
 

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x=-1,y=-1;
    for(int i=1;i<=5;i++){
    	for(int j=1;j<=5;j++){
    		int a;
    		cin>>a;
    		if(a==1){
    			x=i;y=j;
    			break;
    		}
    	}
    	if(x!=-1)
    		break;
    }
    cout<<(abs(x-3))+(abs(y-3));
    
	return 0;
}