#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        map<int, int> d{};
        for (int i=0; i<n; ++i) {cin >> arr[i]; ++d[arr[i]];}

        if (n==1) {cout << 1 << ' ' << 1 << "\n"; continue;}

        int max_length=0;
        int local_length=0;
        int l = 0;
        int local_l = 0;

        for (int j=0; j<n; ++j) {
            if (d[arr[j]]==1) {++local_length;}
            else {
                if (local_length > max_length) {
                    max_length = local_length;
                    l = local_l;
                }
                local_length=0;
                local_l = j+1;
            }
        }
        if (local_length > max_length) {
                max_length = local_length;
                l = local_l;
            }

        if (max_length==0) {cout << 0;} else {cout << l+1 << ' ' << l+max_length;}
        cout << "\n";

    }
}