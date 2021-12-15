#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, q;
    while (scanf("%d%d", &n, &q) != EOF) {
        vector<int> numbers(n);
        for (int i = 0; i < n; i++)
            cin >> numbers[i];
        sort(numbers.rbegin(), numbers.rend());
        while(q--) {
            int i;
            cin>>i;
            printf("%d\n", numbers[i - 1]);
        }
    }
    return 0;
}