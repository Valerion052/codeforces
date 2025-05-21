#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

const int N = 1000001;
int d[N];

void sieve() {
    for (int i=2; i<N; ++i) {
        if (d[i]==0) {
            for (int j=i; j<N; j+=i) {
                d[j] = i;
            }
        }
    }
}

map<int, int> make_dict(int k) {
    map<int, int> ans;
    while (k>1) {
        ++ans[d[k]];
        k/=d[k];
    }
    return ans;
}

int count_divisors(map<int, int> k) {
    int ans = 1;
    for (auto x: k) {ans=min(400, ans*(x.second+1));}
    return ans;
}

long long calculate_max(map<int, int> k) {
    long long ans = 1;
    for (auto x: k) {
        for (int i=1; i<=x.second; ++i) {ans*=(long long)x.first;}
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

        set<int> arr;
        map<int, int> result;

        for (int i=0; i<n; ++i) {
            int num;
            cin >> num;
            arr.insert(num);
            map<int, int> local = make_dict(num);
            for (auto x: local) {result[x.first] = max(result[x.first], x.second);}
        }

        int divisors = count_divisors(result);
        long long max_value = -1;

        if (divisors<=n+2) {
            if (divisors==n+2) {
                max_value = calculate_max(result);
                if (arr.count(max_value)) {max_value=-1;}
            }
            else {
                for (auto& x: result) {
                    ++x.second;
                    divisors = count_divisors(result);
                    if (divisors==n+2) {
                        max_value = calculate_max(result);
                        break;
                    }
                    else {--x.second;}
                }
            }
        }

        cout << max_value << '\n';
    }
}