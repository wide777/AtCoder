#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string norm = "abcdefghijklmnopqrstuvwxyz";
    string X;
    int N;
    cin >> X >> N;

    map<char, int> Map;
    map<char, char> ToNorm;
    REP(i, 26) {
        Map[X[i]] = i;
        ToNorm[norm[i]] = X[i];
    }

    vector<string> S(N);
    REP(i, N) {
        cin >> S[i];
        REP(j, S[i].size()) S[i][j] = norm[Map.at(S[i][j])];
    }

    sort(S.begin(), S.end());

    REP(i, N) {
        REP(j, S[i].size()) cout << ToNorm.at(S[i][j]);
        puts("");
    }

    return 0;
}