#include <iostream>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<string, int> Map;
    for(int i = 0; i < N; ++i) {
        string S;
        cin >> S;
        ++Map[S];
    }

    string ans = "";
    int max_votes = -1;
    for(auto &i : Map) {
        if(i.second > max_votes) {
            ans = i.first;
            max_votes = i.second;
        }
    }
    cout << ans << endl;

    return 0;
}