#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m, Min, Max;
    cin >> n >> m >> Min >> Max;

    int arr[m];
    for (int i=0; i<m; ++i) {cin >> arr[i];}

    int* find_min_m = find(arr, arr+m, Min);
    int* find_max_m = find(arr, arr+m, Max);

    int min = *min_element(arr, arr+m);
    int max = *max_element(arr, arr+m);

    bool flag = true;

    if (max > Max || min < Min) {flag = false;}

    if (flag) {
        int counter = n-m;
        if (find_min_m == arr+m) {--counter;}
        if (find_max_m == arr+m) {--counter;}
        if (counter < 0) {flag = false;}
    }

    if (flag) {cout << "Correct";} else {cout << "Incorrect";}
}