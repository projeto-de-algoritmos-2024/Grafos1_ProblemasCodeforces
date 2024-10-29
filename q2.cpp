#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> g(n + 1);
    vector<int> degree(n + 1, 0);

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        g[u].emplace_back(v);
        g[v].emplace_back(u);
        degree[u]++;
        degree[v]++;
    }

    int times = 0;
    while (true) {
        vector<int> toRemove;
        
        for (int i = 1; i <= n; ++i) {
            if (degree[i] == 1) {
                toRemove.push_back(i);
            }
        }

        if (toRemove.empty()) break;
        
        times++;
        
        for (int node : toRemove) {
            degree[node] = 0; 
            for (int neighbor : g[node]) {
                if (degree[neighbor] > 0) {
                    degree[neighbor]--; 
                }
            }
        }
    }

    cout << times << endl;
}
