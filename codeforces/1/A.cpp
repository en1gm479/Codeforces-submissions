#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int n,m,a,t,s;
	cin>>n>>m>>a;
	if((n*m)<(a*a))
	{
	    cout<<1;
	}
	else{
	    if(n%a==0 && m%a==0)
	    cout<<(n*m)/(a*a);
	    else if(n%a==0)
	    cout<<((n/a))*((m/a)+1);
	    else if(m%a==0)
	    cout<<((n/a)+1)*((m/a));
	    else
	    cout<<((n/a)+1)*((m/a)+1);
	}
	return 0;
}
