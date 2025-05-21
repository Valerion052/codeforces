#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;

    vector<long long> vec(n);
    vector<bool> index(n, true);

    for (int i=0; i<n; ++i) {cin >> vec[i];}

    sort(vec.begin(), vec.end());

    int result = 0;

    for (int j=0; j<n; ++j) {
        if (index[j]) {

            long long l = 1, r = n-1, ans = 0;

            while (l<=r) {
                long long c = (l+r)/2;

                if (vec[j] * k >= vec[c]) {l=c+1; ans = c;}
                else {r=c-1;}
            }
            
            if (vec[j]*k == vec[ans]) {index[ans] = false;}
            ++result;
        }
    }
    cout << result;
}