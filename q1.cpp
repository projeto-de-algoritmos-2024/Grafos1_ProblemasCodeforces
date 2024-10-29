#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;

        vector<vector<int>> g(m + 1);
        vector<int> degree(m + 1, 0);
        unordered_map<int, int> count;

        while (n--) {
            int v, u;
            cin >> v >> u;
            g[v].emplace_back(u);
            g[u].emplace_back(v);
            degree[u]++;
            degree[v]++;
        }

        int maxi = 0;
        for (int i = 1; i <= m; ++i) {
            if (degree[i] == 1) {  
                for (int v : g[i]) {
                    count[v]++;
                    maxi = max(maxi, count[v]);
                }
            }
        }

        cout << count.size() << " " << maxi << endl;
    }
}
