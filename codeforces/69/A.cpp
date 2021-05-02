#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n][3],ax=0,ay=0,az=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1]>>a[i][2];
    }
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<n;i++)
        {
            // cout<<a[i][j]<<" ";
            if(j==0)
            ax+=a[i][0];
            else if(j==1)
            ay+=a[i][1];
            else if(j==2)
            az+=a[i][2];
        }
    }
    // cout<<ax<<""<<ay<<" "<<az<<endl;
    if(ax==0 && ay==0 && az==0)
    cout<<"YES";
    else
    cout<<"NO";
	// your code goes here
	return 0;
}
