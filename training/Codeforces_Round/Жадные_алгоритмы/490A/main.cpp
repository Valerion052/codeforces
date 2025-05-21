#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<vector<int>> arr(4);
    for (int i=1; i<=n; ++i) {
        int num;
        cin >> num;
        arr[num].push_back(i);
    }

    int counter = min(min(arr[1].size(), arr[2].size()), arr[3].size());

    cout << counter << '\n';

    for (int j=0; j<counter; ++j) {
        cout << arr[1][j] << ' ' << arr[2][j] << ' ' << arr[3][j] << '\n';
    }

}