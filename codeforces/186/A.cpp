#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(ll i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define ll long long int
const unsigned int mod = 1000000007;


int main(){
   IOS;
   string s1,s2;
   cin>>s1>>s2;   
   int a[26]={0};
   rof(0,s1.size(),1) a[s1[i]-'a']++;
 
   rof(0,s2.size(),1) a[s2[i]-'a']--;
   bool fl =true;
   rof(0,26,1){
      if(a[i]!=0)
         fl=false;
   }
   if(!fl) cout<<"NO";
   else{
      int ct=0;
      rof(0,s1.size(),1)
      {
         if(s1[i]!=s2[i]) ct++;
      }
      ct==2?cout<<"YES":cout<<"NO";
   }
   return 0;

}

