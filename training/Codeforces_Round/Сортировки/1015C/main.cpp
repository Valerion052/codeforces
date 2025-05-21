#include <iostream>
#include <algorithm>

bool f(int x, int y) {return x>y;}

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    long long int sum_a = 0;
    int counter = 0;

    int arr[n];

    for (int i=0; i<n; ++i) {
        int a, b;
        cin >> a >> b;
        arr[i] = a-b;
        sum_a += a;
    }

    sort(arr, arr+n, f);

    for (int j=0; j<n; ++j) {
        if (sum_a <= m) {break;}
        sum_a -= arr[j];
        ++counter;
    }

    if (sum_a <= m) {cout << counter;} else {cout <<-1;}
}