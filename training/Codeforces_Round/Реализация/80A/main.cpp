#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const int N=300;

vector<int> prime;
vector<bool> visited(N, 0);

void sieve() {
    for (int i=2; i<N; ++i) {
        if (!visited[i]) {
            prime.push_back(i);
            for (int j=i; j<N; j+=i) {
                visited[j]=1;
            }
        }
    }
}



long long delta(pair<long long, long long> x) {return x.second-x.first;}

bool f(pair<long long, long long> x, pair<long long, long long> y) {
    return delta(x) > delta(y);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();

    int n, m;
    cin >> n >> m;
    auto it = find(prime.begin(), prime.end(), n);
    ++it;
    if (*it==m) {cout << "YES";} else {cout << "NO";}
}