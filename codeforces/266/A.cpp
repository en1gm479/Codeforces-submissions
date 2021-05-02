#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
	// your code goes here
int n,i=0,count=0;
char s[50],a;
cin>>n>>s;
while(s[i])
{
    if(s[i] == a)
    {
        count++;
    }
    a=s[i];
    i++;
}
cout<<count;
}
