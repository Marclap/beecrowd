#include <bits/stdc++.h>

using namespace std;

int main(){
    int casos;
    cin>>casos;
    while(casos--){
        int paisA, paisB, con = 0;
        float incrA = 0.0, incrB = 0.0;
        scanf("%d%d%f%f", &paisA, &paisB, &incrA, &incrB);
        while(paisA <= paisB){
            paisA *= (incrA / 100.0) + 1.0;
            paisB *= (incrB / 100.0) + 1.0;
            con++;
            if(con > 100)
                break;
        }
        if(con > 100)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n", con);
    }
    return 0;
}