#include <iostream>
 
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    bool arr[3001]{};
    int index;
 
    for (int i=0; i<n; ++i) {
        int num;
        cin >> num;
        arr[num] = true;
    }
 
    for (int j=1; j<3001; ++j) {
        if (!arr[j]) {cout << j; return 0;}
        index = j;
    }

    cout << index+1;
 
}