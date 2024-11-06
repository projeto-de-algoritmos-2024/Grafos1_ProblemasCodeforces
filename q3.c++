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
vector<int> g[MAX];

long double dfs(int v = 0, int p = -1) {
    long double sum = 0;
    int nch = 0;
    
    for (int u : g[v]) {
        if (u != p) {
            sum += dfs(u, v) + 1;
            nch++;
        }
    }

    return nch ? sum / nch : 0;
}

int main() { _
    int n; cin >> n;

	for(int i = 1; i < n; i++){
		int v, u;cin >> v >> u, v--, u--;
		g[v].push_back(u);
		g[u].push_back(v);
	}

    cout << fixed << setprecision(15) << dfs() << endl;
    return 0;
}