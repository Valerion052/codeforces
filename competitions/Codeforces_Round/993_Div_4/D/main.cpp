#include <iostream>
#include <set>

using namespace std;

int d[200001];

void make_d() {for (int i=1; i<200001; ++i) {d[i] = i;}}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    make_d();

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        int arr[n];
        set<int> check, unique;
        for (int i=0; i<n; ++i) {cin >> arr[i]; unique.insert(arr[i]);}

        
        int it = 1;

        for (int j=0; j<n; ++j) {
            if (!check.count(arr[j])) {
                check.insert(arr[j]);
                cout << arr[j] << ' ';
            }
            else {
                for (int k=it; k<=n; ++k) {
                    if (!unique.count(k)) {
                        cout << d[k] << ' ';
                        it = k+1;
                        break;
                    }
                }
            }
        }
        cout << '\n';
    }

    

}