#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, m, cont, aux;
    vector<int> vagones(50, 0);
    cin>>n;
    while(n--) {
        cin>>m;
        cont = 0;
        for(int i = 0; i < m; i++) 
            cin>>vagones[i];
        for(int i = 0; i < m; i++) {
            for(int j = i + 1; j < m; j++) {
                if(vagones[i] > vagones[j] ) {
                    swap(vagones[i], vagones[j]);
                    cont++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<cont<<" swaps."<<endl;
    }
    return 0;
}