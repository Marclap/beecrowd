#include <bits/stdc++.h>

using namespace std;

int main(){
    double a = 234.345, b = 45.698;
    printf("%.6f - %.6f\n", a, b);
    printf("%.0f - %.0f\n", a, b);
    printf("%.1f - %.1f\n", a, b);
    printf("%.2f - %.2f\n", a, b);
    printf("%.3f - %.3f\n", a, b);
    printf("%.6fe+02 - %.6fe+01\n", a / 100, b / 10);
    printf("%.6fE+02 - %.6fE+01\n", a / 100, b / 10);
    printf("%.3f - %.3f\n", a, b);
    printf("%.3f - %.3f\n", a, b);
    return 0;
}