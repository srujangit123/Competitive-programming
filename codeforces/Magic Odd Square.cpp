#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int lastodd=1,lasteven=2,cn=0;
    bool con=false;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(j>=(n/2)-cn&&j<=(n/2)+cn){
                cout<<lastodd<<' ';
                lastodd+=2;
            }
            else {
                cout<<lasteven<<' ';
                lasteven+=2;
            }
        }
        if(cn==(n/2))con=true;
        if(con)cn--;
        else cn++;
        cout<<endl;
    }
    return 0;
}