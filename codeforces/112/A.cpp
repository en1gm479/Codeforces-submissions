#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main() {
    char s1[100],s2[100];
    int t1=0,i=0;
    cin>>s1>>s2;
    while(s1[i])
    {
        if(!((char)tolower(s1[i]) == (char)tolower(s2[i])))
        {
          //   chk = false;
            t1 = tolower(s1[i])>tolower(s2[i])?1:-1;
            break;
        }
        i++;
    }
    cout<<t1;
}