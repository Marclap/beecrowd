#include <bits/stdc++.h>

using namespace std;

const int MX = 200005;

struct edge {
    int to;
    long long w;
    edge() {}
    edge(int _to, long long _w) : to(_to), w(_w) {}
};

struct arc {
    int from, to;
    long long w;
    arc() {}
    arc(int _from, int _to, long long _w) : from(_from), to(_to), w(_w) {}

    bool operator<(const arc &tmp) const {
        if (w == tmp.w)
        return from < tmp.from;
        return w < tmp.w;
    }
};

typedef vector<vector<edge>> Graph;

int parent[MX];

void init() {
    for (int i = 0; i < MX; i++)
        parent[i] = i;
}

int find(int x) {
    return x == parent[x] ? x : parent[x] = find(parent[x]);
}

void mix(int x, int y) {
    parent[y] = find(x);
}

int kruskal(vector<arc> &arcs) {
    long long ans = 0;
    for (auto it : arcs) {
        if (find(it.from) != find(it.to)) {
        ans += it.w;
        mix(find(it.from), find(it.to));
        }
    }
    return ans;
}

int main() {
    int n, m, u, v, w;
    while (cin >> n >> m && n + m) {
        init();
        Graph g(n);
        vector<arc> arcs(m * 2);
        long long sum = 0;
        for (int i = 0; i < m; i++) {
            cin >> u >> v >> w;
            g[u].emplace_back(edge(v, w));
            g[v].emplace_back(edge(u, w));
            arcs[i] = arc(u, v, w);
            arcs[m + i] = arc(v, u, w);
            sum += w;
        }
        sort(arcs.begin(), arcs.end());
        cout << sum - kruskal(arcs) << endl;
    }
    return 0;
}