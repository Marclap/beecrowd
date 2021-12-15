#include <bits/stdc++.h>

using namespace std;

int main() {
    int casos;
    cin>>casos;
    while(casos--) {
        int num, sumper = 0;
        cin>>num;
        for(int i = 1; (i * 2) <= num; i++) {
            if(num % i == 0)
                sumper += i;
            if(sumper > num)
                break;
        }
        if(sumper == num)
            cout<<num<<" eh perfeito"<<endl;
        else
            cout<<num<<" nao eh perfeito"<<endl;
    }
    return 0;
}