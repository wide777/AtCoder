#include <iostream>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    if(A.length() > B.length()) {
        puts("GREATER");
    } else if(A.length() < B.length()) {
        puts("LESS");
    } else {
        string ans = "EQUAL";
        for(int i = 0; i < (int)A.length(); ++i) {
            if(A[i] == B[i]) continue;
            if(A[i] > B[i]) ans = "GREATER";
            if(A[i] < B[i]) ans = "LESS";
            break;
        }
        cout << ans << endl;
    }

    return 0;
}