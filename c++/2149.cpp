#include <bits/stdc++.h>

using namespace std;

int main(){
    int c;
    while(scanf("%d", &c) != EOF) {
        long long int a = 0, b = 1, sum = 0;
        if(c == 1 || c == 2)
            cout<<c - 1<<endl;
        else {
            for(int i = 3; i <= c; i++) {
                if(i % 2 == 1)
                    sum = a + b;
                else
                    sum = a * b;
                a = b;
                b = sum;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}