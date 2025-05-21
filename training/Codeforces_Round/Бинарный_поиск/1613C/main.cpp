#include <iostream>
#include <vector>

using namespace std;

bool check (vector<long long> vec, long long int h, long long int k) {

    long long int counter = k;

    for (int i=1; i<vec.size(); ++i) {
        if (vec[i]-vec[i-1] >= k) {counter +=k;}
        else {counter += vec[i]-vec[i-1];}
    }
    return counter >= h;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long int h;
        cin >> n >> h;

        vector<long long> vec(n);

        for (int i=0; i<n; ++i) {cin >> vec[i];}

        long long int l=1, r = h;

        while (l<=r) {
            long long int c = (l+r)/2;

            if (check(vec, h, c)) {r=c-1;}
            else {l=c+1;}
        }

        cout << l << '\n';
    }
}