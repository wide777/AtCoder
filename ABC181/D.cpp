#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool solve(string s) {
    if(s.size() == 1) return s == "8";
    if(s.size() == 2) {
        if(stoi(s) % 8 == 0) return true;
        swap(s[0], s[1]);
        return stoi(s) % 8 == 0;
    }

    vector<int> cnt(10, 0);
    for(char x : s) cnt[x - '0']++;
    for(int i = 112; i < 1000; i += 8) {
        auto c = cnt;
        for(char x : to_string(i)) c[x - '0']--;
        bool allp = true;
        for(int x : c)
            if(x < 0) allp = false;
        if(allp) return true;
    }
    return false;
}

int main() {
    string s;
    cin >> s;
    cout << (solve(s) ? "Yes" : "No") << endl;
}