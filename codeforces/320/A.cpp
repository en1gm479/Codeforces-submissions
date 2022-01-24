#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,ct) for(int i=a;i<b;i+=ct)


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    int f=1;
    cin>>s;
    rof(0,s.size(),1){
    	if(s[i]=='1'){
    		if(s[i+1]=='4'){
    			if(s[i+2]=='4'){
    				i+=2;
    			}
    			else{
    				i+=1;
    			}
    		}
    		else
    			continue;
    	}
    	else{
    		f=0;
    		break;
    	}
    }
    if(f)cout<<"YES";
    else cout<<"NO";
	return 0;
}
