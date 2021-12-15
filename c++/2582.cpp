#include <bits/stdc++.h>

using namespace std;

string songs[11] = {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!", "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};

int main() {
    int casos;
    cin>>casos;
    while(casos--) {
        int a, b;
        cin>>a>>b;
        cout<<songs[a + b]<<endl;
    }
    return 0;
}