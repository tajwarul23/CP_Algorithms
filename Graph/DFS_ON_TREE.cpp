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

void dfs(int vertex, int parent){
    /*Take action on vertex after entering the vertex
    */
   for(auto child : g[vertex]){
     /*Take action on child before entering the vertex
    */
        if(child == parent )continue;
        dfs(child, vertex);
    /*Take action on child after exiting the vertex
    */
   }
   /*Take action on vertex before exiting the vertex
    */
}

int main() {
    fast;
    int n; cin>>n;
    for (int i = 0; i <n-1; i++)
    {
        int x,y; cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1, 0);
    
   
    return 0;
}