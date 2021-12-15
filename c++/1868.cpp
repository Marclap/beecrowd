#include <bits/stdc++.h>
#define lli long long int
#define fori(x) for(int i = 0; i < x; i++)
#define forj(x) for(int j = 0; j < x; j++)

using namespace std;

int dx[] = {0, -1, 0, 1}, dy[] = {1, 0, -1, 0}, x, y;

void imprimir(vector<vector<char>> &g) {
    int n = g.size();
    fori(g.size()) {
        forj(g.size())
            cout<<g[i][j];
        cout<<endl;
    }
    cout<<"@"<<endl;
}

bool moverLaX(vector<vector<char>> &g, int iter, int dir) {
    int n = g.size();
    fori(iter) {
        int nx = x + dx[dir], ny = y + dy[dir];
        if (nx < 0 || nx >= n || ny < 0 || ny >= n)
            return false;
        g[x][y] = 'O';
        x = nx;
        y = ny;
        g[x][y] = 'X';
        imprimir(g);
    }
    return true;
}

int main() {
    int n;
    while (cin>>n && n) {
        vector<vector<char>> g(n, vector<char> (n, 'O'));
        x = n / 2,
        y = n / 2;
        int iter = 0;
        g[x][y] = 'X';
        imprimir(g);
        while (true) {
            iter++;
            if (!moverLaX(g, iter, 0))
                break;
            if (!moverLaX(g, iter, 1))
                break;
            iter++;
            if (!moverLaX(g, iter, 2))
                break;
            if (!moverLaX(g, iter, 3))
                break;
        }
    }
    return 0;
}