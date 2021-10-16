#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;

    deque<char> t;
    bool rev = false;

    REP(i, s.length()) {
        if(s[i] != 'R') {
            if(!t.empty()) {
                if(rev) {
                    if(t.front() != s[i]) {
                        t.push_front(s[i]);
                    } else {
                        t.pop_front();
                    }
                } else {
                    if(t.back() != s[i]) {
                        t.push_back(s[i]);
                    } else {
                        t.pop_back();
                    }
                }
            } else {
                t.push_back(s[i]);
            }
        } else {
            rev = !rev;
        }
    }

    if(rev) {
        reverse(t.begin(), t.end());
    }
    while(!t.empty()) {
        char res = t.front();
        t.pop_front();
        cout << res;
    }
    cout << endl;
}