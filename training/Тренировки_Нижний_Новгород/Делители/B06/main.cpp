#include <iostream>
#include <map>
#include <vector>

using namespace std;

const int N = 1e7;
int d[N];

void sieve() {
    for (int i=2; i<=N; ++i) {
        if (d[i]==0) {
            for (int j=i; j<=N; j+=i) {
                d[j] = i;
            }
        }
    }
}

map<int, int> get2(vector<int> arr) {
    
    map<int, int> ans;
    for (auto k: arr) {
        while(k>1) {
            ++ans[d[k]];
            k/=d[k];
        }
    }
    return ans;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    sieve();

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr;
        for (int i=0; i<n; ++i) {
            int num;
            cin >> num;
            arr.push_back(num);
        }

        map<int, int> local = get2(arr);
        int result = 0, remainder  = 0;;
        for (auto x: local) {
            result+=x.second/2;
            remainder+=x.second%2;
        }
        result+=remainder/3;

        cout << result << '\n';
    }
}