#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int main() {
    int num, m = 10001;
    vector<int> cuadrados(m);
    for(int i = 0; i * i < m; i++)
        for(int j = 0; i * i + j * j < m; j++)
            cuadrados[i * i + j * j] = true;
    int n;
    while (cin>>n)
        if (n<0)
            cout<<"NO"<<endl;
        else
            cout<<(cuadrados[n] ? "YES" : "NO")<<endl;
    return 0;
}