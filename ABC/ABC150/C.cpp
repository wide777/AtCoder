#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> P(N), Q(N);
    for(auto &x : P) cin >> x;
    for(auto &x : Q) cin >> x;

    vector<int> A(N);
    iota(A.begin(), A.end(), 1);

    int a, b;
    int cnt = 0;
    do {
        ++cnt;
        if(A == P) a = cnt;
        if(A == Q) b = cnt;
    } while(next_permutation(A.begin(), A.end()));

    cout << abs(a - b) << endl;
    return 0;
}