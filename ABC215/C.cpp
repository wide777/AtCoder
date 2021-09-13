#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string S;
    int K;
    cin >> S >> K;
    sort(S.begin(), S.end());

    int cnt = 1;
    do {
        if(cnt == K) break;
        cnt++;
    } while(next_permutation(S.begin(), S.end()));

    cout << S << endl;
}