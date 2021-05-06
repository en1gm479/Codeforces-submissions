#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    int i=0;
    while(s[i])
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            break;
        }
        i++;
    }
    if(i==s.length())
    printf("NO");
    else
    printf("YES");
	// your code goes here
	return 0;
}
