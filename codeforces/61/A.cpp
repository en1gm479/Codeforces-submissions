#include<bits/stdc++.h>
using namespace std;
 

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s1,s2,res="";
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++){
    	if(s1[i]==s2[i])
    		res+='0';
    	else
    		res+='1';
    }
    cout<<res;
    
	return 0;
}