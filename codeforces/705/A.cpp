#include<bits/stdc++.h>
using namespace std;

int main(){
          int n;
          cin>>n;
          for(int i=0;i<n;i++){
                    if(i==0)
                    cout<<"I hate ";
                    else if(i%2!=0)
                    cout<<"that I love ";
                    else
                    cout<<"that I hate ";
          }
          cout<<"it";
          return 0;
}