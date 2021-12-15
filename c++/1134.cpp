#include <bits/stdc++.h>

using namespace std;

int main(){
    int tipo, al = 0, ga = 0, di = 0;
    while(scanf("%d", &tipo) && tipo != 4){
        if(tipo == 1)
            al++;
        else if(tipo == 2)
            ga++;
        else if(tipo == 3)
            di++;
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", al, ga, di);
    return 0;
}