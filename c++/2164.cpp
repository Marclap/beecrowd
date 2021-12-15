#include <bits/stdc++.h>

using namespace std;

int main() {
    double num, sum, res, div;
    cin>> num;
    sum =  pow((1 + sqrt(5)) / 2, num);
    res =  pow((1 - sqrt(5)) / 2, num);
    div = (sum - res) / sqrt(5);
    printf("%.1lf\n", div);
    return 0;
}