#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

bool ends(const string &a, const string &b) {
    if (b.size() > a.size())
        return false;
    for (int i = 0; i < b.size(); ++i)
        if (a[a.size() - 1 - i] != b[b.size() - 1 - i])
            return false;
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int casos;
    cin >> casos;
    while (casos--) {
        string a, b;
        cin >> a >> b;
        if (ends(a, b))
            cout << "encaixa" << endl;
        else
            cout << "nao encaixa" << endl;
    }

    return 0;
}