#include <iostream>

using namespace std;

int main () {
     int N;
     int arr[101]{};
     int sum_a = 0;

     cin >> N;

     for (int i=0; i<N; i++) {
        int a;
        cin >> a;
        arr[a]++;
     }

     for (int i=0; i<101; i++) {
        sum_a = sum_a + (arr[i] - arr[i]%2);
     }

    cout << sum_a/4;

}