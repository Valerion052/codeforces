#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    pair<int, int> arr[n+1];
    int dict[101]{};
    for (int i=1; i<=n; ++i) {cin >> arr[i].first;}
    for (int j=1; j<=n; ++j) {cin >> arr[j].second;}
    for (int k=1; k<=n; ++k) {dict[arr[k].second]=max(dict[arr[k].second], arr[k].first);}

    int ans=0;
    for (int p=0; p<k; ++p) {
        int num;
        cin >> num;
        if (arr[num].first<dict[arr[num].second]) {++ans;}
    }
    cout << ans;
}