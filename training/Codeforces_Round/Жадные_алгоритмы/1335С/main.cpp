#include <iostream>

using namespace std;

const int N = 2e5+1;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[N]{};
        int unique=0;
        int max_value=0;
        for (int i=0; i<n; ++i) {
            int num; cin >> num;
            if (arr[num]==0) {++unique;}
            ++arr[num];
            if (arr[num]>max_value) {max_value=arr[num];}
        }

        cout << min(unique, max_value-(unique==max_value ? 1:0)) << "\n";
    }
}