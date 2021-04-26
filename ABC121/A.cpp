#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int H, W, h, w;
    cin >> H >> W >> h >> w;
    cout << H * W - h * W - (H - h) * w << endl;
}