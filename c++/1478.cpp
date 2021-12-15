#include <bits/stdc++.h>

using namespace std;

int main() {
    int num;
    while(scanf("%d", &num) && num) {
        for(int i = 0; i < num; i++) {
            for(int j = 0; j < num; j++) {
                if(j)
                    cout<<' ';
                cout<<right<<setw(3)<<abs(i - j) + 1;
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}