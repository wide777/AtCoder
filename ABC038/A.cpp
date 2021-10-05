#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;
    if(S[S.length() - 1] == 'T') {
        puts("YES");
    } else {
        puts("NO");
    }

    return 0;
}