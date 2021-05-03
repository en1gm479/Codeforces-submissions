#include <iostream>
using namespace std;

int main() {
    char s[100];
    cin>>s;
    int i=0,u=0,l=0;
    while(s[i])
    {
        if(isupper(s[i]))
        u++;
        else
        l++;
        i++;
    }
if(l>=u)
{i=0;
    while(s[i])
    {
        s[i]=tolower(s[i]);
        i++;
    }
}
else{
    i=0;
    while(s[i])
    {
        s[i]=toupper(s[i]);
        i++;
    }
}
cout<<s;
	// your code goes here
	return 0;
}
