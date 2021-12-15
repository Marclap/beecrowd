#include <bits/stdc++.h>

using namespace std;

long long int factorial(int a) {
    if(a == 0 || a == 1)
        return 1;
    return factorial(a - 1) * a;
}

int main(){
    string s;
    while(cin>>s) {
        if(s == "0")
            break;
        else
            printf("%lld\n",factorial(s.size()));
    }
    return 0;
}