#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string S;
    cin >> S;
    int N = S.size();
    if(S[N - 1] == 'r') {
        puts("er");
    } else {
        puts("ist");
    }

    return 0;
}