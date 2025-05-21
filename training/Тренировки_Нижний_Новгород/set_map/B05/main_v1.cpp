#include <iostream>

using namespace std;

int main() {
    int n, m, c;
    cin >> n >> m >> c;

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    bool flag = false;
    int counter = 0, counter_loc = 0;

    for (int j=0; j<n; ++j) {

        if (arr[j]<=m) {++counter_loc;}
        
        else {counter_loc=0; continue;}
        if (counter_loc>=c) {++counter;}
    }

    cout << counter;
}