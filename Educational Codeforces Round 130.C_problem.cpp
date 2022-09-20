#include<bits/stdc++.h>
using namespace std;

int  main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s,t;
		cin>>s>>t;
		int a=count(s.begin(), s.end(), 'a');
		int b=count(s.begin(), s.end(), 'b');
		int c=count(s.begin(), s.end(), 'c');
		int aa=count(t.begin(), t.end(), 'a');
		int bb=count(t.begin(), t.end(), 'b');
		int cc=count(t.begin(), t.end(), 'c');
		//cout<<a<<endl<<aa<<endl<<b<<endl<<bb<<endl<<c<<endl<<cc<<endl;
		bool flag=true;
		if(a!=aa || b!=bb || c!=cc)
			flag=false;
		int j=0;
		for(int i=0;i<n;i++){
			if(s[i]=='b')
				continue;
			while(j<n && t[j]=='b')
				j++;
			if(s[i]!=t[j] || (s[i]=='a' && i>j) || (s[i]=='c' && i<j)){
				flag=false;
				break;
			}
			j++;
		}
		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
