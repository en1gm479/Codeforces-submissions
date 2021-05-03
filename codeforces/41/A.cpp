#include <iostream>
#include  <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
    string s,t;
    bool chk = true;
    getline(cin,s);
    getline(cin,t);
    for(int i=0;i<=s.length()-1;i++)
    {
        if(!(s[i]==t[s.length()-i-1]))
        chk = false;
    }
    if(chk)
    cout<<"YES";
    else
    cout<<"NO";
	// your code goes here
	return 0;
}
