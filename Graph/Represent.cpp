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

const int N = 1e3+10;
int graph1 [N][N];

vector<int>graph2[N]; // => Creating N vectors
// vector[1] will say that with whom node 1 is connected

//for weighted graph

vector<pair<int, int>>graph2WT[N];
//declaring an array of vectors, where each vector holds pairs of integers.
//for ex => graph2WT[0] = [(1,5),(2,3)] means
//0 node is connected with 1 with a weight 5
//similarly 0 node is connected with 2 with a weight 3
int main() {
    fast;
    // Adjacency Matrix
    int n,m; cin>>n>>m;
    for (int i = 0; i <m; i++)
    {
        int v1,v2,w;
        cin>>v1>>v2>>w;
        graph1[v1][v2] = w;
        graph1[v2][v1] = w;
    //O(N^2) => space complexity
    //N have to N<=10^3

    }

    //Adjacency List
    for (int i = 0; i <m; i++)
    {
        int v1,v2,w;
        cin>>v1>>v2>>w;
        //for not weighted
        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1);

        //for weighted
        graph2WT[v1].push_back({v2, w});
        graph2WT[v2].push_back({v1, w});

        //O(N+M) => space complexity
        //N can be 10^5, M<10^7
    }
    // for checking connectivity => if i and j connected

    //in Adjacency matrix
    int i,j;
    if(graph1[i][j]==1){
        cout<<"connected\n";
        int weight = graph1[i][j]; //=> for weighted graph
    }
    //time complexity O(1)

    //in Adjacency List
    for (int child : graph2[i])
    {
        if(child == j)cout<<"Connected\n";
    }
    //time complexity O(N)
    
    //for weighted graph
    for(pair<int, int> child: graph2WT[i]){
        if(child.first == j){
            int weight = child.second;
        }
    }

    


    return 0;
}