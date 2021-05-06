#include <iostream>
using namespace std;

int main() {
    int n,a,l=0,count=0;
    cin>>n;
    while(n){
        cin>>a;
        if(a!=l)
        {
            count++;
            l=a;
        }
        n--;
    }
    cout<<count;
	// your code goes here
	return 0;
}
