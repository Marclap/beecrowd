#include <bits/stdc++.h>

using namespace std;

void imprimir(deque<int> a, bool par) {
    for (int i = 0; i < a.size(); i++) {
        if (par)
            cout << "par[";
        else
            cout << "impar[";
        cout << i << "] = " << a[i] << endl;
    }
}

int main() {
    deque<int> par, impar;
    for(int i = 0; i < 15; i++) {
        int a;
        cin>>a;
        if(abs(a % 2) == 0){
            if(par.size() == 5) {
                imprimir(par, true);
                par.clear();
            }
            par.push_back(a);
        } else {
            if(impar.size() == 5) {
                imprimir(impar, false);
                impar.clear();
            }
            impar.push_back(a);
        }
    }
    imprimir(impar, false);
    imprimir(par, true);
    return 0;
}