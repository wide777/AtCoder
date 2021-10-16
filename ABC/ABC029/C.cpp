#include <iostream>
using namespace std;

int N;

void solve(int roop, string s) {
    if(roop == N) {
        cout << s << endl;
    } else {
        for(char c = 'a'; c <= 'c'; ++c) {
            solve(roop + 1, s + c);
        }
    }
}

int main() {
    cin >> N;
    solve(0, "");

    return 0;
}