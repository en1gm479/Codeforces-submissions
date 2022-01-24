#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,ct) for(int i=a;i<b;i+=ct)
bool check(int a[]){
	rof(0,26,1){
		if(a[i]!=0)
			return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    int a[26]={0};

    rof(0,s1.size(),1){
    	a[s1[i]-'A']++;
    }
    rof(0,s2.size(),1){
    	a[s2[i]-'A']++;
    }
    rof(0,s3.size(),1){
    	a[s3[i]-'A']--;
    }
    int res = check(a);
    if(res)cout<<"YES";
    else cout<<"NO";
	return 0;
}