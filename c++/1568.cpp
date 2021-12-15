#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

const int MX = 30000005;

vector<bool> d(MX, true);
vector<int> p;

void criba(){
    d[0] = d[1] = false;
    for(long long int i = 2; i < MX; i++){
        if(d[i]){
            p.push_back(i);
            for(long long int j = i + i; j < MX; j += i)
                d[j] = false;
        }
    }
}

void genDivs(vector<pair<long long int, int> > &f, vector<long long int> &ans, int i, long long acc){
    if(i == f.size())
        return;
    genDivs(f, ans, i + 1, acc);
    for (int j = 0; j < f[i].second; j++) {
        acc *= f[i].first;
        ans.push_back(acc);
        genDivs(f, ans, i + 1, acc);
    }
}

vector<pair<long long int, int> > factorize(long long int n) {
    vector<pair<long long int,int> > ans;
    int i = 0;
    while(i < p.size() && (p[i] * p[i]) <= n ){
        if(n % p[i] == 0){
            int e = 0;
            while (n % p[i] == 0) {
                e++;
                n /= p[i];
            }
            ans.emplace_back(p[i], e);
        }
        i++;
    }
    if(n > 1)
        ans.emplace_back(n, 1);
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    criba();
    long long int n;
    while(cin>>n){
        if(n != 0){
            vector<long long int> k;
            while(n % 2 == 0) n /= 2;
            vector<pair<long long int, int> > g = factorize(n);
            genDivs(g, k, 0, 1LL);
            cout<<k.size() + 1<<endl;
        }else
            cout<<"1"<<endl;
    }
    return 0;
}