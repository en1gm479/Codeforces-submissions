#include<iostream>
using namespace std;

int main(){
          int n,count=0,sum=0;
          cin>>n;
          while(n--){
                    sum=0;
                    int a,b,c;
                    cin>>a>>b>>c;
                    sum=a+b+c;
                    if(sum>1)
                    count++;
          }
          cout<<count;
          return 0;
}