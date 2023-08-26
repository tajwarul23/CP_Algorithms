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
// TIME COMPLEXITY => O(V + E) OR O(N + M)
void dfs(int vertex){
    /* take action on  vertex after entering the vertex
    */
   cout<<vertex<<endl;
    vis[vertex] = true;

    for(auto child : g[vertex]){
        cout<<"par"<<vertex<<" "<<"child"<<child<<endl;
        if(vis[child])continue;
        /* take action on child before entering the child node
        */
        
         dfs(child);
        /*take action on child after exiting the child node
        */

       

    }
    /*take action on vertex before exiting the vertex
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
    int start_node = 1;
    dfs(start_node);
    
    return 0;
}