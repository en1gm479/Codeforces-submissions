#include<bits/stdc++.h>
using namespace std;

int main(){
          int n,k,count=0,tot_time=0;
          cin>>n>>k;
          
          for(int i=0;tot_time+k<=240 && i<=n;i++){
                    tot_time+=(i+1)*5;
                    // cout<<tot_time<<" ";
                    count++;
          }
          cout<<count-1;
}