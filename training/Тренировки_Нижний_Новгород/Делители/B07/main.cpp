#include <iostream>
#include <vector>
#include <map>

using namespace std;

const int N = 100001;

vector<int> d[N];

void sieve() {
    for (int i=2; i<N; ++i) {
        if (d[i].empty()) {
            for (int j=i; j<N; j+=i) {
                d[j].push_back(i);
            }
        }
    }
}

int main() {

    sieve();

    int n;
    cin >> n;

    map<int, int> dict;

    for (int i=0; i<n; ++i) {
        int num;
        cin >> num;
        for (auto x: d[num]) {++dict[x];}
    }

    int max_value = 1;
    for (auto y: dict) {
        if (y.second > max_value) {max_value = y.second;}
    }

    cout << max_value;
}