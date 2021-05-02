#include <iostream>
using namespace std;

int main() {
    int n,t=0,max=0;
    cin>>n;
    while(n)
    {
        int a,b;
        cin>>a>>b;
        t=t-a+b;
        if(max<t)
        max=t;
        n--;
    }
    cout<<max;
	// your code goes here
	return 0;
}
