#include <bits/stdc++.h>

using namespace std;

int main(){
    double n1, n2, n3;
    cin>>n1>>n2>>n3;
    if(n1 < (n2 + n3) && n2 < (n1 + n3) && n3 < (n1 + n2))
        printf("Perimetro = %.1f\n", n1 + n2 + n3);
    else
         printf("Area = %.1f\n", (n3 * (n1 + n2)) / 2);
    return 0;
}
