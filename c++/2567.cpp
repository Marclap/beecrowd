#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin>>a[i];
        sort(a.begin(), a.end());
        int i = 0, j = n - 1, con = 0;
        while(j > i)
            con += abs(a[i++] - a[j--]);
        printf("%d\n", con);
    }
    return 0;
}