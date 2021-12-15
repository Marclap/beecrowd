#include <bits/stdc++.h>

using namespace std;

int valores(string a) {
    int sum = 0;
    for(int i = 0; i < a.size(); i++)
        if(a[i] == '*')
        sum += pow(2, 2 - i);
    return sum;
}

int main() {
    string a;
    int con = 0, num = 0;
    while(getline(cin, a)) {
        if(a.size() > 5) {
            cout<<num<<endl;
            num = 0;
            con++;
        } else
            num += valores(a);
        if(con == 3)
            break;
    }
    return 0;
}