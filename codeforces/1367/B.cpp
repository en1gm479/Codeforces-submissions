#include<bits/stdc++.h>
using namespace std;

int main(){
          int t;
          cin>>t;
          while(t--){
                    int n,count_evn=0,count_odd=0;
                    cin>>n;
                    for(int i=0;i<n;i++){
                              int a;
                              cin>>a;
                              if(a%2 != i%2 && i%2==0)
                              count_evn++;
                              else if(a%2 != i%2 && i%2!=0)
                              count_odd++;
                    }
                    if(count_evn == count_odd)
                    cout<<(count_evn)<<endl;
                    else
                    cout<<-1<<endl;
          }
}