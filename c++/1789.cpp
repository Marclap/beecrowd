#include <bits/stdc++.h>

using namespace std;

int main() {
    int caso;
    while(scanf("%d", &caso) != EOF) {
        vector<int> dato(caso);
        for(int i = 0; i < caso; i++)
            cin>>dato[i];
        sort(dato.rbegin(), dato.rend());
        if(dato[0] >= 20)
            cout<<"3"<<endl;
        else if(dato[0] < 20 && dato[0] >= 10)
            cout<<"2"<<endl;
        else
            cout<<"1"<<endl;
    }
    return 0;
}