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

void dfs(int vertex){
/* Take action on the vertex after entering the vertex
*/
    vis[vertex] = true;
    cout<<vertex<<endl;

    for(auto child : g[vertex]){
    /* Take action on the child before entering the child node
    */
        cout<<"par "<<vertex<<" child"<<child<<endl;
        if(vis[child])continue;

        dfs(child);
    /* Take action on the child after exiting the child node
    */
    }
    /* Take action on the vertex before exiting the vertex
    */
}
int main() {
    fast;
    int n,m; cin>>n>>m;

    for (int i = 0; i <m; i++)
    {
        int v1,v2; 
        cin>>v1>>v2;

        g[v1].push_back(v2);
        g[v2].push_back(v1);

    }

    int start = 1;
    dfs(start);
    
    return 0;
}
/*
************DFS ON WEIGHTED GRAPH*****************
    void dfs(int vertex, int sum){
    vis[vertex] = true;
    ans = max(ans, sum);
    for(auto child : g[vertex]){
        if(!vis[child.first])
        dfs(child.first, sum+child.second);
    }
    vis[vertex] = false;
}

 int n,m; cin>>n>>m;
        for (int i = 0; i <m; i++)
        {
            int v1,v2,w;
            cin>>v1>>v2>>w;
            g[v1].push_back({v2,w});
            g[v2].push_back({v1,w});
        }
        
        for (int i = 1; i <=n; i++)
        {
            dfs(i, 0);
        }
        
    cout<<ans<<endl;

    question => https://atcoder.jp/contests/abc317/tasks/abc317_c

*/