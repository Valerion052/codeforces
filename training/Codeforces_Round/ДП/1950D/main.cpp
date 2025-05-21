#include <iostream>
#include <vector>

using namespace std;

const int N =1e5+1;

bool check(int x) {
    bool flag=1;
    while (x>0 && flag) {
        if (x%10>1) {flag=0;}
        x/=10;
    }
    return flag;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> d;
    for (int i=1; i<N; ++i) {
        if (check(i)) {d.push_back(i);}
    }

    bool dp[N]{}; dp[1]=1;
    for (int i=1; i<N; ++i) {
        if (dp[i]) {
            for (int j=0; j<d.size(); ++j) {
                if ((long long)i*d[j]<N) {dp[i*d[j]]=1;}
                else {break;}
            }
        }
    }

    int t; cin >>t;
    while (t--) {
        int n; cin >> n;
        if (dp[n]) {cout << "YES\n";} else {cout << "NO\n";}
    }
}