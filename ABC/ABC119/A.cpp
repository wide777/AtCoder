#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    if(stoi(s.substr(0, 4)) <= 2019 && stoi(s.substr(5, 2)) <= 4 &&
       stoi(s.substr(8, 2)) <= 30) {
        cout << "Heisei" << endl;
    } else {
        cout << "TBD" << endl;
    }
}