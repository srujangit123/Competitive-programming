#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n + 1), cnt(n + 1, 0);
    for(int i = 1; i <=n; ++i){
        cin >> a[i]; cnt[a[i]]++;    
    } 
    if(n == 1){
        cout << "0" << "\n";
        return;
    }

    int highest_freq_num = max_element(cnt.begin(), cnt.end()) - cnt.begin() - 1;
    int distinct_ele_cnt = 0;//except max ele
    int maxfreq = *max_element(cnt.begin(), cnt.end());

    for(int i = 1; i <=n; ++i){
        if(cnt[i]!=0)
            distinct_ele_cnt++;
    }
    distinct_ele_cnt--;
    if(distinct_ele_cnt >= maxfreq){
        cout << maxfreq << "\n";
        return;
    }//this is perfect 
    
    if(distinct_ele_cnt < maxfreq){
        if((maxfreq-1) >= (distinct_ele_cnt + 1))
            cout << distinct_ele_cnt + 1 << "\n";
        else
            cout << distinct_ele_cnt << "\n";

        return;
    }
    // if(distinct_ele_cnt > maxfreq){
    //     cout << maxfreq << "\n";
    //     return;
    // }
}



int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}




/**
 * 10
    8 8 9 1 7 6 9 4 6 8

    8 8 8 
*/