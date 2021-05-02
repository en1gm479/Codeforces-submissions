#include <iostream>
using namespace std;

int main() {
    int long long n;
    int k;
    cin>>n>>k;
    while(k)
    {
        if(n%10==0)
        n/=10;
        else
        n-=1;
        k--;
    }
    cout<<n;
	// your code goes here
	return 0;
}
