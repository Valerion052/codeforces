#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 2e5+1;
vector<int> dict[N];

void sieve() {
    for (int i=1; i<N; ++i) {
            for (int j=2*i; j<N; j+=i) {
                dict[j].push_back(i);
        }
    }
}

int gcd(int a, int b) {
    if (b==0) {return a;}
    else {return gcd(b, a%b);}
}


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        int counter = 1;
        for (auto k: dict[n]) {
            vector<int> delta;
            for (int _i=0; _i<k; ++_i) {
                for (int _j=_i+k; _j<n; _j+=k) {
                    delta.push_back(abs(arr[_j]-arr[_i]));
                }
            }
            int result;
            if (delta.size() == 0) {
                result = 0;
            } else if (delta.size() == 1) {
                result = delta[0];
            } else {
                result = gcd(max(delta[0], delta[1]), min(delta[0], delta[1]));
                for (int c=2; c<delta.size(); ++c) {
                    int _min = min(delta[c], result);
                    int _max = max(delta[c], result);
                    result = gcd(_max, _min);
                }
            }

            if (result>=2 || result==0) {++counter;}
        }
        cout << counter << '\n';
    }
}