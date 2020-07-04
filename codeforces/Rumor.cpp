#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int c[100002];
ll finalAns;
int mini;
void dfs(vector<int> a[], int node, vector<bool> &vis){
    
    vis[node] = true;
    if(c[node] < mini){
        mini = c[node];
    }
    for(int child : a[node]){
        if(vis[child] == false){
            dfs(a, child, vis);
        }
    }
}


void solve2(){
    int n, m;
    cin >> n >> m;
    vector<int> arr[n + 1];
    vector<bool> vis(n + 1, false);
    ll ans = 0;
    for(int i = 1; i <= n; ++i) cin >> c[i];
    for(int i = 1; i <= m; ++i){
        int p, q;
        cin >> p >> q;
        arr[p].push_back(q);
        arr[q].push_back(p);
    }
    for(int i = 1; i <= n; ++i){
        mini = INT32_MAX;
        if(!vis[i]){
            dfs(arr, i, vis);
            finalAns += mini;
        }
    } 
    cout << finalAns << "\n";   
        
}


int main(){
    solve2();
    return 0;
}