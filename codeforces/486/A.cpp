#include<iostream>
using namespace std;

int main(){
          long long int n,sum=0;
          cin>>n;
          
          if(n%2==0)
          sum = 1*n/2;
          else
          sum = n/2*(-1)-1;
          cout<<sum;
          return 0;
}