#include <iostream>
#include <vector>

using namespace std;

void check(vector<int> &arr, int &ans, int &x) {
    for (int i=0; i<arr.size(); ++i) {
        if ((arr[i]|x)==x) {ans|=arr[i];}
        else {break;}
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> arr_a(n), arr_b(n), arr_c(n);
        for (int i_a=0; i_a<n; ++i_a) {cin >> arr_a[i_a];}
        for (int i_b=0; i_b<n; ++i_b) {cin >> arr_b[i_b];}
        for (int i_c=0; i_c<n; ++i_c) {cin >> arr_c[i_c];}

        int ans=0;
        check(arr_a, ans, x);
        check(arr_b, ans, x);
        check(arr_c, ans, x);

        if (ans==x) {cout << "YES\n";} else {cout << "NO\n";}
    }





}