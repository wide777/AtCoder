#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string n;
    cin >> n;
    for(int bit = 0; bit < (1 << 3); bit++) {
        int sum = int(n[0] - '0');
        string res = "";
        res.push_back(n[0]);
        for(int i = 0; i < 3; i++) {
            if(bit & (1 << i)) {
                sum += int(n[i + 1] - '0');
                res.append("+");
                res.push_back(n[i + 1]);
            } else {
                sum -= int(n[i + 1] - '0');
                res.append("-");
                res.push_back(n[i + 1]);
            }
        }
        res.append("=7");
        if(sum == 7) {
            cout << res << endl;
            return 0;
        }
    }
}