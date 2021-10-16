#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;

    int cnt = 0;
    REP(i, s.length() - 3) {
        if(s[i] == 'Z') {
            if(s[i + 1] == 'O') {
                if(s[i + 2] == 'N') {
                    if(s[i + 3] == 'e') {
                        cnt++;
                    }
                }
            }
        }
    }

    cout << cnt << endl;
}