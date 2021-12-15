#include <bits/stdc++.h>

using namespace std;

int main(){
    int cartas;
    while(cin>>cartas && (cartas != 0)) {
        deque<int> a;
        for(int i = 1; i<= cartas; i++)
            a.push_back(i);
        cout<<"Discarded cards: ";
        while(a.size() > 1) {
            cout<<a.front();
            a.pop_front();
            int b = a.front();
            a.push_back(b);
            a.pop_front();
            if(a.size()>1)
                cout<<", ";
        }
        cout<<endl<<"Remaining card: "<<a.front()<<endl;
    }
    return 0;
}