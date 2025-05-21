#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        int arr[n-1];
        int _max = 0;
        for (int i=0; i<n-1; ++i) {
            int num = (s[i]-'0') + (s[i+1]-'0');
            arr[i]=num;
            _max = max(_max, num);
        }

        int it;
        if (_max > 9) {
            for (int j=n-2; j>=0; --j) {if (arr[j]>9) {it=j; break;}}
        }
        else {
            for (int k=0; k<n; ++k) {if (s[k]-'0'<=arr[k]) {it=k; break;}}
        }

        cout << s.substr(0, it);
        cout << arr[it];
        if (it+2<n) {cout << s.substr(it+2, n-it+2);}
        cout << "\n";

    }
}