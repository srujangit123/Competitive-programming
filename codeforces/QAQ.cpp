#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int n=s.length(),qa=0,q=0,ans=0;
	for(int i=0;i<n;i++){
		if(s[i]=='A')
			qa+=q;
		if(s[i]=='Q'){
			ans+=qa;
			q++;
		}
	}
	cout<<ans<<endl;
	return 0;
}