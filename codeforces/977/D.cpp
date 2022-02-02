#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"

int strt_idx(vector<long long int> vec,int n){
	vector<long long int> vec2;
	int i;
	for(i=0;i<n;i++){
		vec2=vec;
		int idx=i,j;
		for(j=0;j<n;j++){
			if(find(vec2.begin(),vec2.end(),vec2[idx]*1ll*2)!=vec2.end()){
				idx=find(vec2.begin(),vec2.end(),vec2[idx]*1ll*2)-vec2.begin();
			}
			else if(find(vec2.begin(),vec2.end(),vec2[idx]*1ll/3)!=vec2.end()&&vec2[idx]*1ll%3==0){
				idx=find(vec2.begin(),vec2.end(),vec2[idx]*1ll/3)-vec2.begin();
			}
			else {
				break;
			}
			// cout<<i<<":"<<idx<<" ";

		}
		if(j==n-1){
			break;
		}

	}
	return i;
}

int main(){
	IOS;
	
	int n;
	cin>>n;
	vector<long long int> vec;
	rof(0,n,1){
		long long int x;
		cin>>x;
		vec.emplace_back(x); 
	}
	int idx=strt_idx(vec,n);
		// cout<<idx;
	rof(0,n,1){
		cout<<vec[idx]<<" ";
		if(find(vec.begin(),vec.end(),vec[idx]*1ll*2)!=vec.end()){
				idx=find(vec.begin(),vec.end(),vec[idx]*1ll*2)-vec.begin();
		}
		else if(find(vec.begin(),vec.end(),vec[idx]*1ll/3)!=vec.end()){
			idx=find(vec.begin(),vec.end(),vec[idx]*1ll/3)-vec.begin();
		}

	}
	return 0;
}

