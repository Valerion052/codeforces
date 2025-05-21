#include <iostream>
#include <algorithm>
#include <bitset>
#include <vector>
#include <map>

using namespace std;

const int N = 32000;
bitset<N> d;
vector<int> prime;

bool f(pair<int, int> x, pair<int, int>y){return x.second<y.second;}

void sieve() {
    for (int i=2; i<N; ++i) {
        if (d[i]==0) {
            prime.push_back(i);
            for (int j=2*i; j<N; j+=i) {
                d[j] = 1;
            }
        }
    }
}

vector<pair<int, int>> get2(long long k) {
    vector<pair<int, int>> ans;
    map<int, int> local;
    
    for (auto x: prime) {
        if (k==1) {break;}
        while(k%x==0) {
            // cout << x << " - " << k/x << '\n';
            ++local[x];
            k/=x;
        }
    }
    if (k!=1) {++local[k];}

    for (auto l: local) {ans.push_back(l);}
    sort(ans.begin(), ans.end(), f);
    return ans;
}


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> arr = get2(n);
        
        if (arr.empty()) {cout << n;}
        else {
            long long result = 0;
            for (int i=0; i<arr.size(); ++i) {
                long long value = arr[i].second;
                long long del = value;
                for (int j=i; j<arr.size(); ++j) {
                    value *= (long long)arr[j].first;
                    arr[j].second -= del;
                }
                result += value;
            }
            cout << result;
        }
        cout << '\n';
    }
}