#include <deque>
#include <iostream>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    deque<int> d;
    for(int i = 0; i < Q; i++) {
        int t, x;
        cin >> t >> x;
        if(t == 1) {
            d.push_front(x);
        } else if(t == 2) {
            d.push_back(x);
        } else if(t == 3) {
            cout << d.at(x - 1) << endl;
        }
    }
}