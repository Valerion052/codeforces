#include <iostream>
#include <utility>

using namespace std;

int main() {

    int N;
    cin >> N;
    int arr[N];

    for (int i=0; i<N; ++i) {
        cin >> arr[i];
    }

    for (int i=0; i<N; ++i) {
        for (int j=0; j<N-1; ++j) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for (int k=0; k<N; ++k) {
        cout << arr[k] << ' ';
    }
}