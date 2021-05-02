#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a[5][5],t1,t2;
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
            cin>>a[i-1][j-1];
            if(a[i-1][j-1]==1)
            {
                t1=i;
                t2=j;
            }
        }
    }
    cout<<abs(3-t1)+abs(3-t2);
	// your code goes here
	return 0;
}
