#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin>>n;
	int a[n],C=101,c[C]={}; 
	for (int &i:a) cin>>i,++c[i];
 
	int c1=0,c3=0; 
	for (int i:c) c1+=(i==1),c3+=(i>=3);
 
	if (c1&1 && !c3) cout<<"NO", exit(0);
	int f=c1&1;
	cout<<"YES\n";
	
	for (int i:a){
		if (c[i]==1)
			cout<<(c1?"A":"B"),c1=!c1;
		else if (c[i]==2)
			cout<<"A";
		else
			cout<<(f?"B":"A"),f=0;
	}
}


// I knew the logic but failed to implement.(Segmentation error and also memory limit exceeded). Used sets and maps with <int, pair<int, int> >

int main(){
    int t=1;
    while(t--){
        solve();
    }
    return 0;
}