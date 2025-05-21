#include <iostream>
#include<algorithm>

using namespace std;

bool f(string x, string y) {
    if (x.size()<y.size()) {return true;}
    if (x.size()>y.size()) {return false;}
    return x<y;
};

int main() {

    int N;
    cin >> N;

    string arr[N];

    for (int i=0; i<N; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr+N, f);

    for (int j=0; j<N; ++j) {
        cout << arr[j] << ' ';
    }
}