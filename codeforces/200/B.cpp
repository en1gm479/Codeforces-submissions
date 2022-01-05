#include<bits/stdc++.h>
using namespace std;

int main(){
          int n;
          long double total=0;
          cin>>n;
          for(int i=0;i<n;i++){
                    int b;
                    cin>>b;
                    total+=b/100.0;
          }
          cout<<setprecision(14)<<total/n*100;
          return 0;
}