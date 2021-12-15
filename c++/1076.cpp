#include <bits/stdc++.h>

using namespace std;

int n;
map<int, vector<int> > ady;
set<int> recorridos;
int total;

void dfs(int n) {
	int a = recorridos.size();
	recorridos.insert(n);
	if(recorridos.size() != a) {
		total++;
		for(int i = 0; i < ady[n].size(); i++){
			dfs(ady[n][i]);
		}
	}
}

int main() {
	int t, nodos, arcos, a, b;
	scanf("%d", &t);
	while(t--) {
		ady.clear();
		scanf("%d", &n);
		scanf("%d %d", &nodos, &arcos);
		while(arcos--) {
			scanf("%d %d", &a, &b);
			ady[a].push_back(b);
			ady[b].push_back(a);
		}
		total = 0;
		recorridos.clear();
		dfs(n);
		printf("%d\n", (total - 1) * 2);
	}
	return 0;
}