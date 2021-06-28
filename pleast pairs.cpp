#include <bits/stdc++.h>
using namespace std;
#define _USE_MATH_DEFINES
 
int main() {
 
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pair<int ,int>>p;
		for(int i=1;i<=n;i++){
			int a;
			cin>>a;
			p.push_back({a,i});
		}
		sort(p.begin(),p.end());
		int ans=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(1LL *p[i].first*p[j].first>=2*n)
					break;
				if(p[i].first*p[j].first==p[i].second+p[j].second)
					ans++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}