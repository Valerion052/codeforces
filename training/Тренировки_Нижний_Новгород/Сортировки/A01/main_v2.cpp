#include <iostream>

using namespace std;


int main() {

    int N;
    cin >> N;

    int arr[N]{};
    bool decreasing = true;
    bool increasing = true;

    for (int i=0; i<N; ++i) {
        cin >> arr[i];
    }

    for (int i=0; i<N-1; i++) {
        
        if (arr[i] < arr[i+1]) {
            increasing = false;
        }
        if (arr[i] > arr[i+1]) {
            decreasing = false;
        }
    }

    if (increasing || decreasing) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}