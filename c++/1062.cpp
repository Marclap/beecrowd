#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, top;
    vector<int> vet(1005);
    while(scanf("%d", &n) && n){
        while(scanf("%d", &vet[0]) && vet[0]){
            for(int i = 1; i < n; i++)
                scanf("%d", &vet[i]);
            stack<int> p;
            int con = 0;
            for(int i = 1; i <= n; i++){
                p.push(i);
                while(p.size() > 0 && vet[con] == p.top()){
                    con++;
                    p.pop();
                }
            }
            (p.size() == 0) ? puts("Yes") : puts("No");
        }
        puts("");
    }
    return 0;
}