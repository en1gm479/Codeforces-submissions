#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            printf("HARD");
            return 0;
        }
        n--;
    }
    printf("EASY");
	// your code goes here
	return 0;
}
