#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;

    int _max = max(a, b);
    int _min = min(a, b);
    int ans=0;

    while (_min>0) {

        int __max = _max-2;
        int __min = _min+1;
        _max = max(__max, __min);
        _min = min(__max, __min);
        if (_min>=0) {++ans;}
    }
    cout << ans; 
}