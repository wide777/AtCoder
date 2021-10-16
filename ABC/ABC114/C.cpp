#include <iostream>
using namespace std;

int N, n_len = 0, ans = 0;
char tgt[3] = {'3', '5', '7'};
char n_arr[10];

void cnt_digit() {
    int x = N;
    while(x > 0) {
        ++n_len;
        x /= 10;
    }
}

void dfs(int roop = 0) {
    if(roop > n_len) return;

    for(int i = 0; i < 3; ++i) {
        n_arr[roop] = tgt[i];
        string n = "";
        bool flg[3] = {false, false, false};
        for(int i = 0; i < roop + 1; ++i) {
            for(int j = 0; j < 3; ++j) {
                if(n_arr[i] == tgt[j]) flg[j] = true;
            }
            n += n_arr[i];
        }
        if(stoll(n) <= N && flg[0] && flg[1] && flg[2]) ++ans;
        dfs(roop + 1);
    }
}

int main() {
    cin >> N;
    cnt_digit();
    dfs();
    cout << ans << endl;

    return 0;
}