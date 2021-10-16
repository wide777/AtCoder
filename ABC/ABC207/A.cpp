#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    cout << max(max(A + B, B + C), C + A) << endl;
}