#include <iostream>
#include <vector>

using namespace std;

int main () {
     int N;
     vector arr(101, 0);
     int sum_a = 0;

     cin >> N;

     for (int i=0; i<N; i++) {
        int a;
        cin >> a;
        arr[a]++;
     }

     for (int i=0; i<101; i++) {
        sum_a += arr[i]/2;
     }

    cout << sum_a/2;

}