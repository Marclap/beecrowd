#include <bits/stdc++.h>

using namespace std;

int main() {
    int num;
    while(scanf("%d", &num) != EOF) {
        vector<vector<int> > matriz(num, vector<int> (num, 3));
        for(int i = 0; i < num; i++) {
            matriz[i][i] = 1;
            matriz[i][num - i - 1] = 2;
        }
        for(int i = 0; i < num; i++) {
            for(int j = 0; j < num; j++)
                cout<<matriz[i][j];
            cout<<endl;
        }
    }
    return 0;
}