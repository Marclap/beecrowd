#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    string s, tmp;
    bool check;
    cin >> n; 
    cin.ignore();
    while(n--) {
        cin >> k; 
        cin.ignore();
        check = false;
        for (int i = 0; i < k; i++) {
            getline(cin, s);
            if(i == 0)
                tmp = s;
            if(tmp != s)
                check = true;
        }
        if(check) 
            cout<<"ingles"<<endl;
        else
            cout<<s<<endl;
    }
    return 0;
}