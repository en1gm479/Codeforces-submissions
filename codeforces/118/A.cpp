#include <iostream>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
	char s[100];
	cin>>s;
	int i=0;
	while(s[i])
	{
	    s[i] = tolower(s[i]);
	    if(!(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u' || s[i]=='y'))
	    {
	        cout<<"."<<s[i];
	    }
	    i++;
	}
	
	return 0;
}
