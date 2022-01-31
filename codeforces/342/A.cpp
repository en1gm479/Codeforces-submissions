#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"

int main(){
	IOS;
	int n,ct1=0,ct2=0,ct3=0,ct4=0,ct6=0;
	cin>>n;
	bool flag=true;
	int a[n];
	rof(0,n,1){
		cin>>a[i];
		if(a[i]==5||a[i]==7)flag=false;
		if(a[i]==1)ct1++;
		else if(a[i]==2)ct2++;
		else if(a[i]==3) ct3++;
		else if(a[i]==4)ct4++;
		else if(a[i]==6)ct6++;
	}
	if(ct3!=0&&ct6==0)flag=false;
	if(ct3!=0&&ct1==0)flag=false;
	if(flag){
		if(ct1==n/3&&(ct2)==n/3&&(ct4+ct6)==n/3){
			rof(0,n/3,1){
				cout<<1<<" "<<ct2<<" ";
				if(ct4){
					cout<<4;
					ct4--;
				}
				else{
					cout<<6;
				}
				cout<<endl;
			}

		}
		else if(ct1==n/3&&ct3==n/3&&(ct6)==n/3){
			rof(0,n/3,1){
				cout<<1<<" "<<3<<" "<<6<<endl;
			}
		}
		else if(ct1==n/3&&(ct2+ct3)==n/3&&(ct6+ct4)==n/3&&ct3<=ct6){
			rof(0,n/3,1){
				cout<<1<<" ";
				if(ct2){
					cout<<2<<" ";
					ct2--;
				}
				else
					cout<<3<<" ";

				if(ct4){
					cout<<4;
					ct4--;
				}
				else{
					cout<<6;
				}
				cout<<endl;
			}
		}
		else
			cout<<(-1);
	}
	else cout<<(-1);
	
	return 0;
}


