#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define ii pair<int, int>
#define vi vector<int>
#define eb emplace_back
#define debug(x) cout << x << endl
#define F first
#define S second
#define all(x) x.begin(), x.end()

const int MAX = (2e5)+1;

vector<int> aux;
vector<int> g[MAX];
int gr[MAX];
int vis[MAX];

void bfs(int v) {
	vis[v] = 1;
    queue<int> q;
	q.push(v);
	aux.eb(v);

	while (!q.empty()) {
		int v = q.front();
		q.pop();

		for (auto u : g[v]) 
			if (!vis[u]) {
				vis[u] = 1;
				aux.eb(u);
				q.push(u);
			}
	}
}

int main() { _
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; ++i) {
		int x, y; cin >> x >> y; 
        --x, --y;
		g[x].eb(y); 
        g[y].eb(x);
		gr[x]++; 
        gr[y]++;
	}

    int ans = 0, j = 1;
	for (int i = 0; i < n; ++i)
		if (!vis[i]) {
            j = 1;
			aux.clear();
			bfs(i);
			for (auto v : aux) if (gr[v] != 2) j = 0;
            
			if(j) ans++;
		}
	
	cout << ans << endl;
    return 0;
}