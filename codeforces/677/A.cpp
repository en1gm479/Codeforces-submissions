#include <iostream>
using namespace std;

int main() {
    int n,h;
    cin>>n>>h;
    int sum=0,a[n];
    for(int i=0;i<n;i++)
    {cin>>a[i];
    if(a[i]>h)
    sum+=2;
    else
    sum++;
    }
    cout<<sum;
	// your code goes here
	return 0;
}
