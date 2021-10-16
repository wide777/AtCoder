#include <iostream>
#include <set>
using namespace std;

int N;

// #の集合を読み込む関数
void read(set<pair<int, int>> &X) {
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            char x;
            cin >> x;
            if(x == '#') X.insert({i, j});
        }
    }
}

// #の集合を最も左上の点を起点に平行移動する関数
void move(set<pair<int, int>> &X) {
    set<pair<int, int>> mX;
    auto [minx, miny] = *begin(X);
    for(auto [x, y] : X) mX.insert({x - minx, y - miny});
    swap(X, mX);
}

// #の集合を90度回転する関数
void rot(set<pair<int, int>> &X) {
    set<pair<int, int>> mX;
    for(auto [x, y] : X) mX.insert({y, -x});
    swap(X, mX);
}

int main() {
    // #の位置を保持しておく集合
    set<pair<int, int>> S, T;

    // 入力
    cin >> N;
    read(S), read(T);

    // Sを計4回転して一致するか判定
    for(int i = 0; i < 4; ++i) {
        move(S), move(T);
        if(S == T) {
            cout << "Yes" << endl;
            return 0;
        }
        rot(S);
    }
    cout << "No" << endl;

    return 0;
}