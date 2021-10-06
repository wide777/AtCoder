#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int soft_bug = 0;
    int total_bug = 0;
    for(int i = 0; i < N; ++i) {
        int A;
        cin >> A;
        if(A != 0) ++soft_bug;
        total_bug += A;
    }

    cout << (total_bug + soft_bug - 1) / soft_bug << endl;

    return 0;
}