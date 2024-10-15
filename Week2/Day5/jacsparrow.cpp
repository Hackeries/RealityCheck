#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

int find_min_distance(int n, int m, vector<pair<int, int>>& links, int x, int y) {
    vector<vector<int>> adj(n);
    
    for (auto& link : links) {
        int u = link.first;
        int v = link.second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    queue<int> q;
    vector<int> dist(n, -1);
    
    q.push(x);
    dist[x] = 0;
    
    while (!q.empty()) {
        int temp = q.front();
        q.pop();
        
        for (int neighbor : adj[temp]) {
            if (dist[neighbor] == -1) {
                dist[neighbor] = dist[temp] + 1;
                q.push(neighbor);
                
                if (neighbor == y) {
                    return dist[neighbor];
                }
            }
        }
    }
    
    return -1;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<pair<int, int>> links(m);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        links[i] = {u, v};
    }
    
    int x, y;
    cin >> x >> y;
    
    cout << find_min_distance(n, m, links, x, y) << endl;

}
