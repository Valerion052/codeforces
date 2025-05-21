#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, r;
        cin >> n >> r;

        vector<int> arr(n);
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        int seats = 0, remainder = 0, result = 0;

        for (int j=0; j<n; ++j) {
            seats += arr[j]/2;;
            remainder += arr[j]%2;
            }

        int remaining_seats = (r - seats)*2;


        if (remaining_seats>remainder) {result += min(remainder, remaining_seats-remainder);}

        cout << seats*2+result << endl;

    }
}