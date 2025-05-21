#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    int cash[51];
    cash[25] = 0;
    cash[50] = 0;

    for (int i=0; i<n; ++i) {cin >> arr[i];}

    for (int j=0; j<n; ++j) {
        
        if (arr[j]==25) {++cash[25];}
        if (arr[j]==50) {++cash[50]; --cash[25];}
        
        if (arr[j]==100) {
            if (cash[50]>=1) {--cash[50]; --cash[25];}
            else {cash[25] -= 3;}
        }
        if (cash[25]<0 || cash[50]<0) {cout << "NO"; return 0;}
    }

    cout << "YES";

}