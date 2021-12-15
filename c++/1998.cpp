#include <bits/stdc++.h>
#define lli long long int
#define forme(x) for(int i = 0; i < x; i++)

using namespace std;

vector<int> a(505);
int n;

bool proximoMovimiento(int &i) {
    i = 0;
    for(; i < n; i++)
        if (a[i] == (i + 1))
            return true;
    return false;
}

int main(){
    while (cin >> n && n > 0) {
        forme(n)
            cin >> a[i];
        int i = 0;
        while (proximoMovimiento(i)) {
            a[i] = 0;
            for (int j = 0; j < i; j++)
                a[j]++;
        }
        bool ok = accumulate(a.begin(), a.begin() + n, 0) == 0;
        puts(ok ? "S" : "N");
        a.resize(501, 0);
    }
    return 0;
}