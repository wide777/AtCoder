#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll K;
    string A, B;
    cin >> K >> A >> B;

    ll a = 0;
    REP(i, A.size())
    a += (int)((A[(int)A.size() - 1 - i]) - '0') * pow(K, i);

    ll b = 0;
    REP(i, B.size()) b += (int)((B[(int)B.size() - 1 - i]) - '0') * pow(K, i);

    cout << a * b << endl;
    return 0;
}