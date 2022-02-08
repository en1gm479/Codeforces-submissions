#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(ll i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define ll long long int
const unsigned int mod = 1000000007;


int main(){
   IOS;
   int n;
   cin>>n;
   vector<int> ct1,ct2,ct3;
   
   rof(0,n,1){
      int a;
      cin>>a;
      if(a==1)
         ct1.push_back(i+1);
      else if(a==2)
         ct2.push_back(i+1);
      else
         ct3.push_back(i+1);
   }
   int minIt = ((ct1.size()<=ct2.size())&&(ct1.size()<=ct3.size()))?ct1.size():(((ct2.size()<=ct1.size())&&(ct2.size()<=ct3.size()))?ct2.size():ct3.size());
   cout<<minIt<<endl;
   rof(0,minIt,1){
      cout<<ct1[i]<<" "<<ct2[i]<<" "<<ct3[i]<<endl;
   }

}

