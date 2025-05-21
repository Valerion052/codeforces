#include <iostream>
#include <map>

using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    map<long long, long long> all_elements, necessary_elements;
    long long ans = 0;

    while (n--) {
        int x;
        cin >> x;

        if (x%k==0) {
            ans += necessary_elements[x/k];
            necessary_elements[x] += all_elements[x/k];
        }
        ++all_elements[x];
    }
    cout << ans;
}