#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    long long sum = 0;
    for (int i=0; i<n; ++i) {
        int num;
        cin >> num;
        sum+=num;
        cout << sum << ' ';
    } 

}