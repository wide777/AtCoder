#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> L(N);
    for(int i = 0; i < L.size(); i++) {
        cin >> L.at(i);
    }
    sort(L.begin(), L.end());

    int count = 0;
    for(int i = 0; i < N - 2; i++) {
        for(int j = i + 1; j < N - 1; j++) {
            if(L.at(i) == L.at(j)) {
                continue;
            }
            for(int k = j + 1; k < N; k++) {
                if(L.at(j) == L.at(k)) {
                    continue;
                }
                if(L.at(i) + L.at(j) > L.at(k)) {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
}
