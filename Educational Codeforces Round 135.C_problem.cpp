#include<bits/stdc++.h>
using namespace std;

int  main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin>>n;
		map<int,int>a,b;
		for(int i=0;i<n;i++){
			int q;
			cin>>q;
			a[q]++;
		}
		for(int i=0;i<n;i++){
			int q;
			cin>>q;
			b[q]++;
		}
		for(auto i:a){
			int num=i.first;
			int freq1=a[num],freq2=b[num];
			a[num]-=min(freq2,freq1);
			b[num]-=min(freq2,freq1);
		}
		int sol=0;
		for(auto i:a){
			int num=i.first;
			if(num>9){
				int temp=(int)log10(num)+1;
				a[temp]+=a[num];
				sol+=a[num];
				a[num]=0;
			}
		}
		for(auto i:b){
			int num=i.first;
			if(num>9){
				int temp=(int)log10(num)+1;
				b[temp]+=b[num];
				sol+=b[num];
				b[num]=0;
			}
		}
		for(auto i:a){
			int num=i.first;
			int freq1=a[num],freq2=b[num];
			a[num]-=min(freq2,freq1);
			b[num]-=min(freq2,freq1);
		}
		for(auto i:a)
			if(i.first!=1)
				sol+=i.second;
		for(auto i:b)
			if(i.first!=1)
				sol+=i.second;
		cout<<sol<<endl;
	}
	return 0;
}
