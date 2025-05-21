
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        int arr[n];

        for (int i=0; i<n; ++i) {
            cin >> arr[i];
        }

        if (n==1) {
            if (arr[0]>0)  {
                cout << arr[0]-1 << endl;
                } else {
                    cout << 0 << endl;
                }
            return 0;
            }


        sort(arr, arr+n);

        int mex = -1;

        if (arr[0]>0) {mex = 0;}
        else {
            for (int j=1; j<n; ++j) {

                if (arr[j] - arr[j-1] > 1) {
                    mex = arr[j-1]+1;
                    break;
                }
            }
        }

        if (mex<0) {mex = arr[n-1]+1;}

        if (mex > arr[n-1]) {
            for (int j=1; j<n; ++j) {

                if (arr[j] - arr[j-1] == 0) {

                    if ((mex-arr[j])%x == 0) {
                        // arr[j] = mex;
                        mex +=1;
                    }

                }
            }
        }

        cout << mex << endl;
    }
}