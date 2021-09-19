#include <iostream>
using namespace std;

int N;
char S[210][210], T[210][210];

// テーブルを時計回りに90度回転する関数
void rot() {
    char newS[210][210];

    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            newS[i][j] = S[N - 1 - j][i];
        }
    }
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            S[i][j] = newS[i][j];
        }
    }
}

// テーブルの中で最も左上にある#の位置を返す関数
pair<int, int> find_left_top(char X[210][210]) {
    int x = 0, y = 0;
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            if(X[i][j] == '#') {
                x = i, y = j;
                break;
            }
        }
    }
    return {x, y};
}

// SとTが一致するか否かのBool値を返す関数
bool is_same_shape() {
    auto [Si, Sj] = find_left_top(S);
    auto [Ti, Tj] = find_left_top(T);
    int offset_i = Ti - Si;
    int offset_j = Tj - Sj;

    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            int ii = i + offset_i;
            int jj = j + offset_j;
            if(0 <= ii && ii < N && 0 <= jj && jj < N) {
                if(S[i][j] != T[ii][jj]) return false;
            } else {
                if(S[i][j] == '#') return false;
            }
        }
    }

    return true;
}

int main() {
    // #の個数をカウントする変数
    int cntS = 0, cntT = 0;

    // 入力
    cin >> N;
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            cin >> S[i][j];
            if(S[i][j] == '#') ++cntS;
        }
    }
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            cin >> T[i][j];
            if(T[i][j] == '#') ++cntT;
        }
    }

    // SとTに含まれる#の個数が異なれば終了
    if(cntS != cntT) {
        cout << "No" << endl;
        return 0;
    }

    // Sを計4回転して一致するか判定
    for(int i = 0; i < 4; ++i) {
        if(is_same_shape()) {
            cout << "Yes" << endl;
            return 0;
        }

        rot();
    }
    cout << "No" << endl;

    return 0;
}