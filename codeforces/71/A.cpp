#include <iostream>
#include <string.h>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n)
	{
	    char a[100];
	    cin>>a;
	    int t=strlen(a);
	   // cout<<"t :"<<t<<endl;
	    if(t<=10)
	    {
	        cout<<a<<endl;
	    }
	    else{
	        printf("%c%d%c\n",a[0],t-2,a[t-1]);
	    }
	    n--;
	}
	return 0;
}
