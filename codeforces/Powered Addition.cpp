#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	vector<int> a(n,0);
	for(int i=0;i<n;i++)
		cin>>a[i];
	int ans=-1;
	for(int i=1;i<n;i++){
		if(a[i-1]>a[i]){
			ans=max(ans,(int)floor(log2(a[i-1]-a[i])));
			a[i]=a[i-1];
		}
	}
	cout<<ans+1<<endl;
	}
}