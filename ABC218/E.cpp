#include <atcoder/dsu>
#include <iostream>
using namespace std;
using namespace atcoder;

int main() {
    // 入力
    int N, M;
    cin >> N >> M;
    vector<tuple<int, int, int>> edges(M);
    long long cost = 0;
    for(int i = 0; i < M; ++i) {
        int A, B, C;
        cin >> A >> B >> C;
        --A, --B;
        edges[i] = {C, A, B};

        // 負のコストを除いた総コストの計算
        cost += max(C, 0);
    }

    // コストが小さい順にソート
    sort(edges.begin(), edges.end());

    // 最小全域木の作成：クラスカル法
    dsu d(N);
    for(auto [C, A, B] : edges) {
        // コストが負または0なら連結
        // コストが正で未連結なら連結
        if(C <= 0) {
            d.merge(A, B);
        } else {
            if(d.same(A, B) == false) {
                d.merge(A, B);
                cost -= C;
            }
        }
    }
    // 解の出力
    cout << cost << endl;

    return 0;
}
