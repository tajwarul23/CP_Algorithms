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
vector<int>g[N];
bool vis[N];
vector<vector<int>>cc;
vector<int>current_cc;

void dfs(int vertex){
    vis[vertex] = true;
    current_cc.pb(vertex);
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
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
   }
   for (int i = 1; i <=n; i++)
   {
        current_cc.clear();
        if(!vis[i]){
            dfs(i);
            cc.push_back(current_cc);
        }
   }
   for(auto it: cc){
        for(auto vertex : it){
            cout<<vertex<<" ";
        }
        cout<<endl;
   }
   
    return 0;
}