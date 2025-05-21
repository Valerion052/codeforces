#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> vec(n), s(n);

    for (int i=0; i<n; ++i) {cin >> vec[i];}

    s[0] = vec[0];
    for (int i=1; i<n; ++i) {s[i] = s[i-1]+vec[i];}

    for (int i=0; i<n; ++i) {cout << s[i] << ' ';}
}

// int main() {
//     int n;
//     cin >> n;

//     vector<long long> vec(n);
//     long long sum = 0;

//     for (int i=0; i<n; ++i) {
//         int num;
//         cin >> num;
//         sum += num;
//         vec[i] = sum;}

//     for (int i=0; i<n; ++i) {cout << vec[i] << ' ';}
// }