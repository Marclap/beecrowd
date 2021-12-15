#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> numeros(10);
	for(int i = 0; i < 10; i++) {
        cin>>numeros[i];
        if(numeros[i] < 1)
            numeros[i] = 1;
	}
	for(int i = 0; i < 10; i++)
        printf("X[%d] = %d\n", i, numeros[i]);
	return 0;
}