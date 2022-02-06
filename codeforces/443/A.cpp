#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(LL _i=a;_i<b;_i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
typedef long long int LL;

int main(){
   IOS;
   string s;
   getline(cin,s);
   set<char> s1;
   for(int i=0;i<s.size();i++)
      {
         if(isalpha(s[i]))
            s1.insert(s[i]);
      }
      cout<<s1.size();
}