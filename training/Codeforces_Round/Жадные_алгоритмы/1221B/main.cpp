#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    map<char, char> d = {{'W', 'B'}, {'B', 'W'}};

    char start = 'B';
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            cout << d[start];
            start=d[start];
        }
        cout << "\n";
        if (n%2==0) {start=d[start];}
    }


}