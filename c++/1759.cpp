#include <bits/stdc++.h>

using namespace std;

void imprimir(int num) {
    if(num == 1){
        cout<<"Ho";
        return;
    }
    cout<<"Ho ";
    imprimir(num - 1);
}

int main() {
    int num;
    cin>>num;
    imprimir(num);
    cout<<"!"<<endl;
    return 0;
}