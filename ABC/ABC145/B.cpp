#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if(n % 2 == 1) {
        cout << "No" << endl;
        return 0;
    }

    string s1 = s.substr(0, n / 2);
    string s2 = s.substr(n / 2, n / 2);

    if(s1 == s2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}