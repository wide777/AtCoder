#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<char>> img(H + 2, vector<char>(W + 2, '#'));

    for(int i = 1; i <= H; ++i) {
        for(int j = 1; j <= W; ++j) cin >> img[i][j];
    }

    for(int i = 0; i <= H + 1; ++i) {
        for(int j = 0; j <= W + 1; ++j) cout << img[i][j];
        cout << endl;
    }

    return 0;
}