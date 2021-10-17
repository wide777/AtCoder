#include <iostream>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    bool pass1[10];
    bool pass2[10][10];
    bool pass3[10][10][10];
    for(int i = 0; i < 10; ++i) {
        pass1[i] = false;
        for(int j = 0; j < 10; ++j) {
            pass2[i][j] = false;
            for(int k = 0; k < 10; ++k) pass3[i][j][k] = false;
        }
    }

    for(int i = 0; i < (int)S.size(); ++i) {
        int num = S[i] - '0';
        for(int a = 0; a < 10; ++a) {
            if(!pass1[a]) continue;
            for(int b = 0; b < 10; ++b) {
                if(!pass2[a][b]) continue;
                pass3[a][b][num] = true;
            }
        }
        for(int a = 0; a < 10; ++a) {
            if(!pass1[a]) continue;
            pass2[a][num] = true;
        }
        pass1[num] = true;
    }

    int ans = 0;
    for(int i = 0; i < 10; ++i) {
        for(int j = 0; j < 10; ++j) {
            for(int k = 0; k < 10; ++k) {
                if(pass3[i][j][k]) ++ans;
            }
        }
    }
    cout << ans << endl;

    return 0;
}