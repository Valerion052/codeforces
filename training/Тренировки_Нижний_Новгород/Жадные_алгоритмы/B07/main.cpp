#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[5]{};

    for (int i=0; i<n; ++i) {
        int num;
        cin >> num;
        ++arr[num];
    }

    int result = arr[4];

    result += arr[2]/2;
    arr[2] = arr[2]%2;

    int min_1_3 = min(arr[1], arr[3]);
    result += arr[3];
    arr[1] -= min_1_3;

    result += (arr[1]+arr[2]*2)/4;
    if ((arr[1]+arr[2]*2)%4 > 0) {result += 1;}

    cout << result;
    
}
