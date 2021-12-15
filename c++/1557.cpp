#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    while (cin>>x && x) {
        int t = 1 << ((x - 1) << 1);
        int a = 0;
        while (t > 0) {
            t /= 10;
            a++;
        }
        a++;
        int p[30];
        p[0] = 1;
        for (int i = 1; i < 30; ++i)
            p[i] = p[i - 1] << 1;
        string f1 = "%" + static_cast<ostringstream*>(&(ostringstream()<<a)) -> str() + "d";
        string f2 = "%" + static_cast<ostringstream*>(&(ostringstream()<<a - 1)) -> str() + "d";
        for (int i = 0; i < x; ++i) {
            for (int j = 0; j < x; ++j) {
                if (j)
                    printf(f1.c_str(), p[j + i]);
                else
                    printf(f2.c_str(), p[j + i]);
            }
            puts("");
        }
        puts("");
    }
    return 0;
}