#include <iostream>
#include <vector>

using namespace std;

const int N = 1e5;
vector<int> prime;
bool vis[N]{};


void solve() {
    for (int i=2; i<N; ++i) {
        if (!vis[i]) {
            prime.push_back(i);
            for (int j=i; j<N; j+=i) {
                vis[j]=1;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    int t;
    cin >> t;

    while (t--) {

        int x, k;
        cin >> x >> k;

        bool flag = k > 1 ? 0 : 1;
        for (int i=0; i<prime.size() && flag; ++i) {
            if (x<2) {flag=0;}
            if (x%prime[i]==0 && x/prime[i]>1) {flag=0;}
        }

        if (x==1 && k==2) {flag=1;}
        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
        
    }
}