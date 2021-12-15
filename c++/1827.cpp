#include <bits/stdc++.h>

using namespace std;

int main() {
    int num;
    while(scanf("%d", &num) != EOF) {
        vector<vector<int> > matriz(num, vector<int> (num, 0));
        int k = num / 3, mid = num / 2;
        for(int i = 0; i < num; i++) {
            matriz[i][i] = 2;
            matriz[i][num - i - 1] = 3;
        }
        for(int i = k; i < num - k; i++)
            for(int j = k; j < num - k; j++)
                matriz[i][j] = 1;
        matriz[mid][mid] = 4;
        for(int i = 0; i < num; i++) {
            for(int j = 0; j < num; j++)
                cout<<matriz[i][j];
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}