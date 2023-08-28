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

const int N = 1e5+10;
vector<int>g[N];
bool vis[N];

bool dfs(int vertex, int parent){
    bool isLoop = false;
    vis[vertex] = true;

    for (auto child : g[vertex])
    {
        if(vis[child] and child == parent)continue;
        if(vis[child]) return true;

        isLoop |= dfs(child, vertex);


    }
    return isLoop;
}

int main() {
    fast;
    int n,m; cin>>n>>m;
    for (int i = 0; i <m; i++)
    {
        int v1,v2; cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    bool yes = false;
    for (int i = 1; i <=n; i++)
    {
        if(!vis[i]){
            if(dfs(i, 0)){
                yes = true;
                break;
            }

        }
    }
    
    if(yes)cout<<1;
    else cout<<0;
    return 0;
}
// https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbWxDRGZYY0lLNEhIYUxsY2FfMDRRSDMxdDJQZ3xBQ3Jtc0tsMmRfd1RlYV95WWdpYUJfZE1nQnRpT1N6alc5VFhFMlE1V3RkMm5CWEpLUTdiVk9tZkNUeDVMLVljeGlNU3dlcHNVYWlPX3JiRnpTR292Rm1HdVlkNlppQzRGTkdkOExHa3ZtaF9FdVkwZElTTzRFUQ&q=https%3A%2F%2Fwww.interviewbit.com%2Fproblems%2Fcycle-in-undirected-graph%2F&v=zBbRgLpeZus