#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(ll i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define ll long long int
const unsigned int mod = 1000000007;


int main(){
   IOS;
   char trump;
   cin>>trump;
   string first,second;
   cin>>first>>second;
   int win=-1;
   if((second[1]==trump&&first[1]==trump)||(second[1]==first[1])) win=-1;
   else if(second[1]==trump) win=0;
   else if(first[1]==trump)win=1;
   else win=0;

   if(win==1) cout<<"YES";
   else if(win==0) cout<<"NO";
   else{
      int ct=0;
      map<char,int> mpp;
      mpp['6']=ct++;
      mpp['7']=ct++;
      mpp['8']=ct++;
      mpp['9']=ct++;
      mpp['T']=ct++;
      mpp['J']=ct++;
      mpp['Q']=ct++;
      mpp['K']=ct++;
      mpp['A']=ct++;
      if(mpp[first[0]]>mpp[second[0]]) cout<<"YES";
      else cout<<"NO";
   }

}

