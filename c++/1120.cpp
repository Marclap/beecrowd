#include <bits/stdc++.h>

using namespace std;

int main() {
    char c;
    string line;
    while (cin >> c >> line && c != '0') {
        int first = 0;
        for (int i = 0; i < line.size(); ++i) {
            if (line[i] == c)
                continue;
            first = (line[i] != '0') || first;
            if (first)
                cout << line[i];
        }
        if (!first)
            cout << '0';
        cout << endl;
    }
    return 0;
}