#include <iostream>
#include <string>
using namespace std;

int main() {
    // 入力
    string N;
    int K;
    cin >> N >> K;

    // 関数定義
    auto oct_to_dec = [](string x) {
        long long y = 0, pow8 = 1;
        for(int i = (int)x.size() - 1; i >= 0; i--) {
            y += (x[i] - '0') * pow8;
            pow8 *= 8LL;
        }
        return y;
    };

    auto dec_to_nonary_with_replace = [](long long x) {
        string y;
        if(x == 0) y = "0";
        while(x > 0) {
            char c = ((x % 9) + '0');
            if(c == '8') c = '5';
            y = c + y;
            x /= 9;
        }
        return y;
    };

    // 実行
    string ans = N;
    for(int i = 0; i < K; i++) ans = dec_to_nonary_with_replace(oct_to_dec(ans));
    cout << ans << endl;
}