#include <bits/stdc++.h>
#include <iomanip>
#define ll long long
#define pb push_back
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define arrin(arr, n) for (ll i = 0; i < n; i++) cin >> arr[i];
#define arrout(arr, n) for (ll i = 0; i < n; i++) cout << arr[i] << " "; cout << "\n";
#define vin(v, n) for (ll i = 0; i < n; i++) { ll x; cin >> x; v.pb(x); }
#define vout(v) for (auto it : v) cout << it << " "; cout << "\n";

using namespace std;
const int N = 1e5 + 10;
bool vis[N];
vector<int>g[N];

void dfs(int vertex){
    
    vis[vertex] = true;

    for(auto child : g[vertex]){
        if(vis[child])continue;
        dfs(child);
    }
}
int main() {
    fast;
    int n,m; cin>>n>>m;
    for (int i = 0; i <m; i++)
    {
        int x,y; cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }
    int count = 0;
    for (int i = 1; i <=n; i++)
    {
        if(!vis[i]){
            dfs(i);
            count++;
        }
    }
    if(count==1 and m == n - 1)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
/*
https://www.spoj.com/problems/PT07Y/ => is it A tree?
if number of edges == node - 1 and number of connected component == 1 then it's a tree

https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/?purpose=login&source=problem-page&update=google
=> number of connected components 
 number of times  dfs will run == number of components
*/

