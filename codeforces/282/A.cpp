#include<iostream>
using namespace std;

int main(){
          int n,a=0;
          cin>>n;
          while(n--){
                    char s[5];
                    cin>>s;
                    if(s[0]=='X' && s[1]=='+')
                    a++;
                    else if(s[0]=='X' && s[1]=='-')
                    a--;
                    else if(s[0]=='+')
                    ++a;
                    else if(s[0]=='-')
                    --a;
                    
          }
          cout<<a;
          return 0;
}