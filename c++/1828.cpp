#include <bits/stdc++.h>

using namespace std;

bool resultado(string a, string b) {
    if ("tesoura" == a && "papel" == b)
        return true;
    if ("papel" == a && "pedra" == b)
        return true;
    if ("pedra" == a && "lagarto" == b)
        return true;
    if ("lagarto" == a && "Spock" == b)
        return true;
    if ("Spock" == a && "tesoura" == b)
        return true;
    if ("tesoura" == a && "lagarto" == b)
        return true;
    if ("lagarto" == a && "papel" == b)
        return true;
    if ("papel" == a && "Spock" == b)
        return true;
    if ("Spock" == a && "pedra" == b)
        return true;
    if ("pedra" == a && "tesoura" == b)
        return true;
    return false;
}

int main() {
    int n, con = 1;
    cin >> n;
    string a, b;
    while(n--) {
        cout<<"Caso #"<<con++<<": ";
        cin>>a>>b;
        if (a == b)
            cout << "De novo!" << endl;
        else if (resultado(a, b))
            cout << "Bazinga!" << endl;
        else
            cout << "Raj trapaceou!" << endl;
    }
    return 0;
}