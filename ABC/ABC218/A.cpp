#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    string S;
    cin >> N >> S;
    if(S[N - 1] == 'o') {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}