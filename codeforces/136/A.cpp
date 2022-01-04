#include<iostream>
using namespace std;

int main(){
          int n;
          cin>>n;
          int a[n];
          for(int i=1;i<=n;i++){
                    int b;
                    cin>>b;
                    a[b]=i;
          }
          for(int j=1;j<=n;j++)
          cout<<a[j]<<" ";
          return 0;
}