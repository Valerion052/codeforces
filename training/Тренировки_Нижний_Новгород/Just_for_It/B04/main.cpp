#include <iostream>
 
using namespace std;
 
 
int main() {
 
    int n, a, b;
    int sum = 0;
    int arr[100];
 
    cin >> n;
 
    for (int i=0; i<n-1; i++) {
        int d;
        cin >> d;
        arr[i+1] = d;
    }

    cin >> a;
    cin >> b;

    for (int i=a; i<b; i++) {
        sum += arr[i];
    }

    cout << sum;


}