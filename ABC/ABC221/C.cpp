#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    string N;
    cin >> N;
    sort(N.begin(), N.end());

    long long ans = 0;
    do {
        if(N[0] == '0') continue;
        for(int i = 1; i < (int)N.size(); ++i) {
            if(N[i] == '0') continue;
            long long A = stoll(N.substr(0, i));
            long long B = stoll(N.substr(i));
            ans = max(ans, A * B);
        }
    } while(next_permutation(N.begin(), N.end()));

    cout << ans << endl;

    return 0;
}