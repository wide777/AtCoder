#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int A[M], B[M];
    for(int i = 0; i < M; ++i) {
        cin >> A[i] >> B[i];
        --A[i], --B[i];
    }

    for(int i = 0; i < N; ++i) {
        unordered_set<int> f, ff;
        f.insert(i);
        for(int j = 0; j < M; ++j) {
            if(A[j] == i) f.insert(B[j]);
            if(B[j] == i) f.insert(A[j]);
        }

        for(auto i : f) {
            for(int j = 0; j < M; ++j) {
                if(A[j] == i && !f.count(B[j])) ff.insert(B[j]);
                if(B[j] == i && !f.count(A[j])) ff.insert(A[j]);
            }
        }
        cout << ff.size() << endl;
    }

    return 0;
}