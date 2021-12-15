#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int casos;
    cin>>casos;
    while(casos--) {
        int numero, valor;
        cin>>numero;
        vector<int> altura(231);
        for(int i = 0; i < numero; i++) {
            cin>>valor;
            altura[valor]++;
        }
        bool espa = true;
        for(int i = 19; i < altura.size(); i++)
            while(altura[i]--) {
                if(!espa)
                    cout<<" ";
                cout<<i;
                espa = false;
            }
        cout<<endl;
    }
    return 0;
}