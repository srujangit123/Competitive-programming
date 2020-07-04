#include<bits/stdc++.h>
#define ll long long
#define MAX 200007
using namespace std;
 
int main(){
    ll n,m,i,a[MAX],ans=0;
    cin>>n>>m;
    for(i=0;i<n;++i)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;++i){
        if(i>=m)
            a[i]+=a[i-m];
        ans+=a[i];
        cout<<ans<<' ';
    }
    return 0;
}