#include <bits/stdc++.h>

using namespace std;

int main() {
    int con = 0;
    for(int i = 1, j = 7; i < 10; j--) {
        if(con == 3) {
            i += 2;
            j = 7;
            con = 0;
        }
        con++;
        if(i < 10)
            printf("I=%d J=%d\n", i, j);
    }
    return 0;
}