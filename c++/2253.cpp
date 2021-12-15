#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    while(getline(cin, str)) {
        bool x = false, y = false, z = false;
        int length = str.length();
        if(length<6||length>32)
            cout<<"Senha invalida."<<endl;
        else {
            bool p = true;
            for(int i=0;i<length;i++) {
                if(str[i] >= 65 && str[i]<=90)
                    x = true;
                else if(str[i] >= 97 && str[i] <= 122)
                    y = true;
                else if(str[i] >= 48 && str[i] <= 57)
                    z = true;
                else {
                    p = false;
                    break;
                }
            }
            if(x && y && z && p)
                cout<<"Senha valida."<<endl;
            else
                cout<<"Senha invalida."<<endl;
        }
    }
    return 0;
}