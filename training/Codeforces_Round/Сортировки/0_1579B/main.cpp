#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        int arr[n], arr_sort[n];

        for (int i=0; i<n; ++i) {
            cin >> arr[i];
        }

        int minElement = arr[0];
        int minIndex = 0;
        int step = 0;
        int counter = n;

        cout << n << endl;
        
        while (counter--) {
            for (int j=minIndex; j<n; ++j) {
                if (arr[j] < minElement) {
                    minElement = arr[j];
                    step = j;
                }
            }

            // if ((step-minIndex) == 0) {return 0;}

            cout << minIndex+1 << ' ' << step+1 << ' ' << step-minIndex << endl;

            for (int r=minIndex; r<n; ++r) {
                if ((r-step) < 0) {
                    arr_sort[n+r-step] = arr[r];
                } else {
                    arr_sort[r-step+minIndex] = arr[r];
                }
            }

            int lag;
            lag = arr_sort[0];

            for (int l=0; l<n; ++l) {
                arr[l] = arr_sort[l];
            }

            minIndex += 1;
            minElement = arr[minIndex];


        }

    }

}
