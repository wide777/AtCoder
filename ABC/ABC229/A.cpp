#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string S1, S2;
    cin >> S1 >> S2;

    if((S1[0] == '.' && S2[1] == '.') || (S1[1] == '.' && S2[0] == '.')) {
        puts("No");
    } else {
        puts("Yes");
    }

    return 0;
}