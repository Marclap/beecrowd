#include <bits/stdc++.h>

using namespace std;

struct Ch {
    int l, f;
};

bool cmp(Ch a, Ch b) {
    if(a.f == b.f)
        return (a.l > b.l);
    return (a.f < b.f);
}

int main() {
    bool b = false;
    string s;
    while(getline(cin, s)) {
        vector<Ch> arr(200);
        if(b)
            puts("");
        b = true;
        for(int i = 0; i < 200; i++)
            arr[i].l = i;
        for(int i = 0; i < s.length(); i++)
            arr[s[i]].f++;
        stable_sort(arr.begin(), arr.end(), cmp);
        for(int i = 0; i < 200; i++)
            if(arr[i].f != 0)
                cout << arr[i].l << " " << arr[i].f << '\n';
    }
    return 0;
}