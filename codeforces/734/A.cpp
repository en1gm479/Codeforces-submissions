#include <iostream>
#include  <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
    int long n;
    cin>>n;
    cin.ignore(80, '\n');
    string s;
    getline(cin,s);
    // cout<<s<<"g";
    int count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        if(s[i] == 'A')
        count1++;
        else
        count2++;
    }
    // cout<<count1<<count2;
    if(count1==count2)
    cout<<"Friendship";
    else if(count1>count2)
    cout<<"Anton";
    else
    cout<<"Danik";
	// your code goes here
	return 0;
}
