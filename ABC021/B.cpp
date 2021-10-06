#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N, a, b, K;
    cin >> N >> a >> b >> K;

    unordered_set<int> us;
    us.insert(a), us.insert(b);
    for(int i = 0; i < K; ++i) {
        int P;
        cin >> P;
        if(us.count(P)) {
            puts("NO");
            return 0;
        }
        us.insert(P);
    }
    puts("YES");

    return 0;
}