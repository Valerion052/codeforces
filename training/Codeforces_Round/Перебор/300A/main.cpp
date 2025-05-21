#include <iostream>
#include <vector>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> a, b, c;
    for (int i=0; i<n; ++i) {
        int num; cin >> num;
        if (num<0) {a.push_back(num);}
        else if (num>0) {b.push_back(num);}
        else {c.push_back(num);}
    }
    
    if (b.empty()) {
        b.push_back(*a.begin()); a.erase(a.begin());
        b.push_back(*a.begin()); a.erase(a.begin());
    }

    if (a.size()%2==0) {
        c.push_back(*a.begin()); a.erase(a.begin());

    }

    cout << a.size() << ' '; for (int _a: a) {cout << _a << ' ';} cout << "\n";
    cout << b.size() << ' '; for (int _b: b) {cout << _b << ' ';} cout << "\n";
    cout << c.size() << ' '; for (int _c: c) {cout << _c << ' ';} cout << "\n";

}