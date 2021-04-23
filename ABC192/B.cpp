#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

static const int MAX = 1000;

int main() {
    string s;
    cin >> s;

    bool hard_to_read = true;
    for(int i = 1; i <= s.length(); i++) {
        if(((i % 2) == 1 && !islower(s[i - 1])) ||
           ((i % 2) == 0 && !isupper(s[i - 1]))) {
            hard_to_read = false;
            break;
        }
    }

    if(hard_to_read) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}