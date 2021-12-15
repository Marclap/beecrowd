#include <bits/stdc++.h>

using namespace std;

int main() {
	int casos;
	cin>>casos;
	while(casos--) {
        int a, b;
        string numero = "";
        cin>>a>>b;
        for(int i = a; i <= b; i++) {
            cout<<i;
            numero += static_cast<ostringstream*>(&(ostringstream() << i))->str();
        }
        reverse(numero.begin(), numero.end());
        cout<<numero<<endl;
	}
	return 0;
}