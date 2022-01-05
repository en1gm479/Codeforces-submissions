#include<bits/stdc++.h>
using namespace std;

int main(){
          int n,p,q,i;
          cin>>n;
          int a[n];
          
          cin>>p;
          while(p--){
                    int x;
                    cin>>x;
                    a[x-1]=1;
          }
          cin>>q;
          while(q--){
                    int x;
                    cin>>x;
                    a[x-1]=1;
          }
          
          for(i=0;i<n;i++)
          {
                    
                    if(a[i]!=1)
                    break;
          }
          
          if(i==n)
          cout<<"I become the guy.";
          else
          cout<<"Oh, my keyboard!";
          return 0;
}