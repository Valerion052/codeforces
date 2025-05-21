#include <iostream>

using namespace std;


int main() {

    int N;
    cin >> N;

    int arr[N]{};
    int count_1 = 0;
    int count_2 = 0;

    for (int i=0; i<N; ++i) {
        cin >> arr[i];
    }

    for (int i=0; i<N-1; i++) {
        
        if (arr[i] >= arr[i+1]) {
            count_1++;
        }

        if (arr[i] <= arr[i+1]) {
            count_2++;
        }
    }

    if (count_1 == N-1 || count_2 == N-1) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}