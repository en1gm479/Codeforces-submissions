#include <iostream>
using namespace std;

int main() {
    int long long num;
    cin>>num;
    int count=0;
    while(num){
        if(num%10==7 || num%10==4)
        count++;
        num/=10;
    }
    if(count==4 || count==7)
    cout<<"YES";
    else
    cout<<"NO";
	// your code goes here
	return 0;
}
