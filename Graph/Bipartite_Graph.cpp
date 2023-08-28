#include <iostream>
#include <vector>
using namespace std;

const int N = 100005; // Maximum number of vertices
vector<int> graph[N]; // Adjacency list representation
int color[N]; // Color array: 0 or 1
bool isBipartite = true;

void dfsBipartite(int vertex, int c) {
    color[vertex] = c;
    
    for (int neighbor : graph[vertex]) {
        if (color[neighbor] == -1) {
            dfsBipartite(neighbor, 1 - c); // Alternate coloring
        } else if (color[neighbor] == c) {
            isBipartite = false; // Same color indicates not bipartite
            return;
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m; // Number of vertices and edges
    
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); // Undirected graph
    }
    
    fill(color, color + n + 1, -1); // Initialize color array
    
    for (int i = 1; i <= n; i++) {
        if (color[i] == -1) {
            dfsBipartite(i, 0); // Start DFS from unvisited vertices
        }
    }
    
    if (isBipartite) {
        cout << "Graph is bipartite." << endl;
    } else {
        cout << "Graph is not bipartite." << endl;
    }
    
    return 0;
}
/*'
Question => https://practice.geeksforgeeks.org/problems/bipartite-graph/1
*/

/*
Solve ====>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
lass Solution {
    private: 
    bool dfs(int vertex, int c, vector<int>adj[], int colour[]){
        colour[vertex] = c;
        
        for(auto child : adj[vertex]){
            if(colour[child] == -1){
                if(dfs(child, !c, adj, colour) == false)return false;
            }
            else if(colour[child] == c)return false;
        }
        return true;
    }
public:
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    int colour[V];
	    for(int i =0; i<V; i++)colour[i] = -1;
	    for(int i=0; i<V; i++){
	        if(colour[i]==-1){
	            if(dfs(i,0,adj,colour)==false)return false;
	        }
	    }
	    return true;
	    
	}

};
*/