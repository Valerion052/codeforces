#include <iostream>
#include <algorithm>

using namespace std;

bool f(int x, int y) {
    if (x%2==0 && y%2!=0) {return true;}
    else if (x%2!=0 && y%2==0) {return false;}
    return x<y;
}

int main () {
    int N;
    cin >> N;

    int arr[N];

    for (int i=0; i<N; ++i) {
        cin >>arr[i];
    }

    sort(arr, arr+N, f);

    for (int j=0; j<N; ++j) {
        cout << arr[j] << ' ';
    }

}