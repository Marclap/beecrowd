#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int main(){
    int n, m;
    while(scanf("%d%d", &n, &m) != EOF) {
        int a[n + 2][m + 2];
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= m; j++) {
                scanf("%d", &a[i][j]);
                if(a[i][j])
                    a[i][j] = 9;
            }
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= m; j++) {
                if(a[i][j] == 9) {
                    if(a[i][j + 1] != 9)
                        a[i][j + 1]++;
                    if(a[i][j - 1] != 9)
                        a[i][j - 1]++;
                    if(a[i + 1][j] != 9)
                        a[i + 1][j]++;
                    if(a[i - 1][j] != 9)
                        a[i - 1][j]++;
                }
            }
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++)
                cout<<a[i][j];
            cout<<endl;
        }
    }
    return 0;
}