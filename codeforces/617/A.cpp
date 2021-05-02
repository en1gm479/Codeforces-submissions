#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int long x,sum=0,count=0;
	cin>>x;
	while(sum<x)
	{
	    if(sum+5<=x)
	    {
	        sum+=5;
	        count++;
	    }
	    else if(sum+4<=x)
	    {
	        sum+=4;
	        count++;
	    }
	   else if(sum+3<=x)
	    {
	        sum+=3;
	        count++;
	    }
	    else if(sum+2<=x)
	    {
	        sum+=2;
	        count++;
	    }
	    else if(sum+1<=x)
	    {
	        sum+=1;
	        count++;
	    }
	}
	cout<<count;
	return 0;
}
