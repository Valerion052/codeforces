#include <iostream>


using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    double s;
    cin >> n >> s;

    int arr[100001]{};
    for (int i=0; i<n-1; ++i) {
        int a, b;
        cin >> a >> b;
        ++arr[a];
        ++arr[b];
    }

    int count = 0;
    for (int x: arr) {if (x==1) {++count;}}

    printf("%.6f \n", s/count*2);

}