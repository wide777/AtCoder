#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;

    set<int> s;
    int cnt_free_color = 0;
    for(int i = 0; i < N; ++i) {
        int a;
        cin >> a;
        int color = a / 400;
        if(color > 7) {
            ++cnt_free_color;
        } else {
            s.insert(color);
        }
    }

    int m = max(1, (int)s.size());
    int M = (int)s.size() + cnt_free_color;
    cout << m << " " << M << endl;

    return 0;
}