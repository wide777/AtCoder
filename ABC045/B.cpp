#include <iostream>
using namespace std;

int main() {
    char C[3] = {'A', 'B', 'C'};
    string S[3];
    cin >> S[0] >> S[1] >> S[2];

    int person_now = 0, idx_now = 0;
    int idx_A = 0, idx_B = -1, idx_C = -1;
    for(int i = 0; i < 300; ++i) {
        if(idx_now + 1 > (int)S[person_now].length()) {
            cout << C[person_now] << endl;
            break;
        }

        char now_c = S[person_now][idx_now];
        if(now_c == 'a') {
            ++idx_A;
            person_now = 0, idx_now = idx_A;
        } else if(now_c == 'b') {
            ++idx_B;
            person_now = 1, idx_now = idx_B;
        } else if(now_c == 'c') {
            ++idx_C;
            person_now = 2, idx_now = idx_C;
        }
    }

    return 0;
}