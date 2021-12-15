#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, tmp;
    while(cin>>n && n != -1) {
        int cont = 0, tot = 0;
        while(n--) {
            cin>>tmp;
            tot += tmp;
            if(!(tot % 100))
                cont++;
        }
        cout<<cont<<endl;
    }
    return 0;
}