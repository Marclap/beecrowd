#include <bits/stdc++.h>

using namespace std;

struct nodo {
    int nro;
    struct nodo *izq, *der;
};

typedef struct nodo *ABB;

ABB crearNodo(int x) {
    ABB nuevoNodo = new(struct nodo);
    nuevoNodo->nro = x;
    nuevoNodo->izq = NULL;
    nuevoNodo->der = NULL;
    return nuevoNodo;
}

void insertar(ABB &arbol, int x) {
    if(arbol == NULL)
        arbol = crearNodo(x);
    else if(x < arbol->nro)
        insertar(arbol->izq, x);
    else if(x > arbol->nro)
        insertar(arbol->der, x);
}

void preOrden(ABB arbol) {
    if(arbol!=NULL){
        cout  <<" "<< arbol->nro;
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
}

void enOrden(ABB arbol) {
    if(arbol != NULL){
        enOrden(arbol->izq);
        cout << " "<< arbol->nro;
        enOrden(arbol->der);
    }
}

void postOrden(ABB arbol) {
    if(arbol != NULL){
        postOrden(arbol->izq);
        postOrden(arbol->der);
        cout<< " " << arbol->nro;
    }
}

int main() {
    int casos, con = 1;
    cin>>casos;
    while(casos--) {
        ABB arbol = NULL;
        int nodos;
        cin>>nodos;
        while(nodos--) {
            int x;
            cin>>x;
            insertar(arbol, x);
        }
        cout<<"Case "<<con<<":"<<endl;
        cout<<"Pre.:";
        preOrden(arbol);
        cout<<endl;
        cout<<"In..:";
        enOrden(arbol);
        cout<<endl;
        cout<<"Post:";
        postOrden(arbol);
        cout<<endl;
        cout<<endl;
        con++;
    }
    return 0;
}