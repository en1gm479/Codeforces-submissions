#include<iostream>
using namespace std;

int main(){
          char s[10];
          cin>>s;
          int n = atoi(s);
          while(n++){
                 itoa(n,s,10);
                 if(s[0] != s[1] && s[1] != s[2] && s[2] != s[3] && s[0] != s[2] && s[0] != s[3] && s[1] != s[3])
                 break;
          }
          cout<<n;
          return 0;
}