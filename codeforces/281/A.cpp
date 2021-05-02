#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
	// your code goes here
	char s[1000];
	cin>>s;
	s[0]=(char)toupper(s[0]);
	cout<<s;
	return 0;
}
