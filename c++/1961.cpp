#include <bits/stdc++.h>

using namespace std;

int main(){
    int p, n, i = 0;
    bool win = true;
    cin>>p>>n;
    vector<int> tubos(n);
    while(scanf("%d", &tubos[i++]) && i < n);
    for(int i = 1; i < n; i++)
        if(abs(tubos[i] - tubos[i - 1]) > p)
            win = false;
    printf((win) ? "YOU WIN\n" : "GAME OVER\n");
    return 0;
}