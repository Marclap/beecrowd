#include <bits/stdc++.h>

using namespace std;

int main(){
    float n1, n2, n3, n4, media;
    cin>>n1>>n2>>n3>>n4;
    media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / 10;
    printf("Media: %.1f\n", media);
    if(media >= 7.0)
        cout<<"Aluno aprovado."<<endl;
    else if(media < 5.0)
        cout<<"Aluno reprovado."<<endl;
    else{
        cout<<"Aluno em exame."<<endl;
        float n5, mediaFinal;
        cin>>n5;
        printf("Nota do exame: %.1f\n", n5);
        mediaFinal = (media + n5) / 2;
        if(mediaFinal > 5.0)
            cout<<"Aluno aprovado."<<endl;
        else
            cout<<"Aluno reprovado."<<endl;
        printf("Media final: %.1f\n", mediaFinal);
    }
    return 0;
}