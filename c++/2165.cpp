#include <bits/stdc++.h>

using namespace std;

int main() {
    string a;
    getline(cin, a);
    printf((a.size() > 140) ? "MUTE\n" : "TWEET\n");
    return 0;
}