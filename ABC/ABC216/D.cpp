#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    // Step1: Input
    int N, M;
    cin >> N >> M;
    vector<queue<int>> A(M);      // A[position][ball number]
    vector<vector<int>> memo(N);  // memo[ball number][position]
    for(int i = 0; i < M; ++i) {
        int k;
        cin >> k;
        for(int j = 0; j < k; ++j) {
            int a;
            cin >> a;
            A[i].push(a - 1);
        }
        memo[A[i].front()].push_back(i);
    }

    // Step2: Make list of removeable ball number
    queue<int> que;
    for(int i = 0; i < N; ++i) {
        if(memo[i].size() == 2) que.push(i);
    }

    // Step3: Put out removeable balls 
    while(!que.empty()) {
        int t = que.front();  // t: target
        que.pop();
        for(int pos : memo[t]) {
            A[pos].pop();
            if(A[pos].empty()) continue;
            memo[A[pos].front()].push_back(pos);
            if(memo[A[pos].front()].size() == 2) que.push(A[pos].front());
        }
    }

    // Step4: Output
    for(auto q : A) {
        if(!q.empty()) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}