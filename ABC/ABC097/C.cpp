#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s;
    int K;
    cin >> s >> K;
    int N = (int)s.size();

    vector<string> vec;
    for(int i = 0; i < N; ++i) {
        for(int j = 1; j < 6; ++j) vec.push_back(s.substr(i, j));
    }
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());

    cout << vec[K - 1] << endl;
    return 0;
}