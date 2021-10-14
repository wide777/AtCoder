#include <iostream>
#include <vector>
using namespace std;

vector<int> memo;

int rec(int n) {
    if(n == 0) return 0;
    if(memo[n] != -1) return memo[n];

    int res = n;
    for(int pow6 = 1; pow6 <= n; pow6 *= 6) res = min(res, rec(n - pow6) + 1);
    for(int pow9 = 1; pow9 <= n; pow9 *= 9) res = min(res, rec(n - pow9) + 1);

    return memo[n] = res;
}

int main() {
    int N;
    cin >> N;
    memo.assign(N + 1, -1);

    cout << rec(N) << endl;
    return 0;
}