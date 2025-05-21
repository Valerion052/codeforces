#include <iostream>

using namespace std;


int main() {

    int N;
    int n[100];
    int arr[1001]{};

    cin >> N;
    
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        arr[num]++;
        }

    int k = 0;
    for (int i = 0; i < 1001; ++i) {
        if (arr[i] > k) {
            k = arr[i];
            }
        }
    
    int result = (k*100)/N;

    cout << result << '%';
  
    return 0;
}