#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int A, N;
    cin>>A;
    do {
        cin>>N;
    }while(N <= 0);
    long long int tmp = 0;
    while(--N >= 0)
        tmp += A + N;
    cout<<tmp<<endl;
    return 0;
}