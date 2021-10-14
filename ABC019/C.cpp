#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N;
    cin >> N;
    unordered_set<int> s;
    for(int i = 0; i < N; ++i) {
        int a;
        cin >> a;
        while(a % 2 == 0) a /= 2;
        s.insert(a);
    }
    cout << s.size() << endl;

    return 0;
}