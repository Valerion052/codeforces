#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);;
        bool flag = false;

        for (int i=0; i<n; ++i) {cin >> arr[i];}

        if (arr.front() == arr.back()) {
            int counter = 0;
            for (int i=0; i<n; ++i) {
                if (arr.front()==arr[i]) {++counter;}
            }
            if (counter >= k) {flag = true;}
        }
        else {
            
            int count_front = 1, index_last_front = 0;
            for (int j=1; j<n; ++j) {
                if (count_front%k==0) {break;}
                else if (arr.front()==arr[j]) {++count_front; index_last_front = j;}
                }
            
            int count_back = 1, index_last_back = n-1;
            for (int j=n-2; j>=0; --j) {
                if (count_back%k==0) {break;}
                else if (arr.back()==arr[j]) {++count_back; index_last_back = j;}
                }
            
            if (count_front%k == 0 &&
                count_back%k == 0 &&
                index_last_front < index_last_back
             ) {flag = true;}

        }

        if (flag) {cout << "YES";} else {cout << "NO";}
        cout << '\n';
    }
}