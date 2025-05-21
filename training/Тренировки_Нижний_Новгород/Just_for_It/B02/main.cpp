#include <iostream>
 
using namespace std;
 
 
int main() {
 
    int N;
    int arr[3]{};
 
    cin >> N;
 
    for (int i=0; i<N; i++) {
        int num;
        cin >> num;
        arr[num-1]++;
    }

    int max = arr[0];
    if (arr[1] > max) {
        max = arr[1];
    }
    if (arr[2] > max) {
        max = arr[2];
    }

    cout << N - max;


    
    return 0;
}