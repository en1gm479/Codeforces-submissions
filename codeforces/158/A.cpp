#include <iostream>
using namespace std;

int main() {
    int n,k,count=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int f = k;
    // cout<<a[f-1]<<" ";
    for(int j=n-1;j>=0;j--)
    {
        // cout<<a[j]<<" ";
        if(a[j]>0 && a[j]>=a[f-1])
        count++;
        // cout<<a[j];
    }
    cout<<count;
	// your code goes here
	return 0;
}
