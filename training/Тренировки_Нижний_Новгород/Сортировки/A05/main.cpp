#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int N;
    int count = 0;
    cin >> N;

    int arr[N];

    for (int i=0; i<N; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr+N);

    for (int j=0; j<N-1; ++j) {
        if (arr[j]!=arr[j+1]) {++count;}
    }

    cout << count+1;

}