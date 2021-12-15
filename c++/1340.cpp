#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while(cin>>n) {
        int x, y;
        bool _p = true, _q = true, _s = true;
        priority_queue<int> p;
        queue<int> q;
        stack<int> s;
        for(int i = 0; i < n; ++i) {
            cin>>x>>y;
            if(x == 1) {
                p.push(y);
                q.push(y); 
                s.push(y);
            } else {
                if(p.top() != y) 
                    _p = false;
                if(q.front() != y) 
                    _q = false;
                if(s.top() != y) 
                    _s = false;
                p.pop();
                q.pop(); 
                s.pop();
            }
        }
        if((_p && _q && _s) || (!_p && _q && _s) || (_p && !_q && _s) || (_p && _q && !_s)) 
            cout<<"not sure"<<endl;
        else if (_p && !_q && !_s) 
            cout<<"priority queue"<<endl;
        else if (!_p && _q && !_s) 
            cout<<"queue"<<endl;
        else if (!_p && !_q && _s) 
            cout<<"stack"<<endl;
        else 
            cout<<"impossible"<<endl;
    }
    return 0;
}