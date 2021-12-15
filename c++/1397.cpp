#include <bits/stdc++.h>

using namespace std;

int main() {
    int casos;
    while(scanf("%d", &casos)) {
        if(casos == 0)
            break;
        int con1 = 0, con2 = 0, a, b;
        for(int i = 0; i < casos; i++) {
            scanf("%d%d", &a, &b);
            if(a > b)
                con1++;
            else if(b > a)
                con2++;
        }
        cout<<con1<<" "<<con2<<endl;
    }
    return 0;
}