#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(LL _i=a;_i<b;_i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
typedef long long int LL;

int main(){
   IOS;
   int a,b,c;
   cin>>a>>b>>c;
   int max1=a*b*c;
   int max2=(a+b)*c;
   int max3=(a)*(b+c);
   int max4 = a+b+c;
   // cout<<max1<<" "<<max2<<" "<<max3<<" "<<max4<<endl;;
   if(max1>=max2&&max1>=max3&&max1>=max4) cout<<max1;
   else if(max2>=max1&&max2>=max3&&max2>=max4) cout<<max2;
   else if(max3>=max1&&max3>=max2&&max3>=max4) cout<<max3;
   else cout<<max4;
}