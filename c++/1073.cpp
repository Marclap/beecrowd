#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b;
	cin>> a;
	for(int i = 2; i <= a; i+=2) {
        b = i * i;
        printf("%d^2 = %d\n", i, b);
        b = 0;
	}
	return 0;
}