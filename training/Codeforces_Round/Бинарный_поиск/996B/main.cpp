#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    int* index_min = min_element(arr, arr+n);
    int target = distance(arr, index_min);
    int fact = *index_min%n;

    int counter = *index_min;
    if (fact < target) {
        for (int j=fact; j<=target; ++j) {
            if (arr[j]-counter<=0) {cout << j+1; return 0;}
            ++counter;
        }
    }
    else {
        for (int j=fact; j<n; ++j) {
            if (arr[j]-counter<=0) {cout << j+1; return 0;}
            ++counter;
        }
        for (int j=0; j<=target; ++j) {
            if (arr[j]-counter<=0) {cout << j+1; return 0;}
            ++counter;
        }   
    }
}