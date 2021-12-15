#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int a, b;
    while(cin>>a>>b && (a || b)) {
        long long int c = a + b;
        string d = static_cast<ostringstream*>(&(ostringstream()<<c))->str();
        for(int i = 0; i < d.size(); i++) {
            if(d[i] == '0')
                continue;
            cout<<d[i];
        }
        cout<<endl;
    }
    return 0;
}