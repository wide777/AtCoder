#include <iostream>
using namespace std;

int main() {
    int N;
    int NG[3];
    string ans = "YES";
    cin >> N;
    for(auto &i : NG) {
        cin >> i;
        if(i == N) ans = "NO";
    }

    for(int iter = 0; iter < 100; ++iter) {
        bool flag;
        for(int i = 3; 1 <= i; --i) {
            flag = true;
            for(int j = 0; j < 3; ++j) {
                if((N - i == NG[j]) || (N - i < 0)) flag = false;
            }
            if(flag) {
                N -= i;
                break;
            }
        }
        if(flag == false) break;
    }
    if(N != 0) ans = "NO";
    cout << ans << endl;

    return 0;
}