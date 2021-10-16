#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string s, head, tail;
    cin >> s;
    int q;
    cin >> q;
    int pari = 0;
    REP(i, q) {
        int t;
        cin >> t;
        if(t == 1) {
            pari = (pari + 1) % 2;
            swap(head, tail);
        } else if(t == 2) {
            int f;
            char c;
            cin >> f >> c;
            if(f == 1) {
                if(pari == 0) {
                    head = c + head;
                } else {
                    head = head + c;
                }
            } else if(t == 2) {
                if(pari == 0) {
                    tail = tail + c;
                } else {
                    tail = c + tail;
                }
            }
        }
    }
    if(pari == 0) {
        s = head + s + tail;
    } else {
        s = tail + s + head;
        reverse(s.begin(), s.end());
    }
    cout << s << endl;
}