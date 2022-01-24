#include<bits/stdc++.h>
using namespace std;
 

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
    	if(s[i]=='.'){
    		cout<<0;
    		continue;
    	}
    	else if(s[i]=='-' && s[i+1]=='.'){
    		cout<<1;
    		i++;
    		continue;
    	}
    	else{
    		cout<<2;
    		i++;
    	}
    }
    
	return 0;
}