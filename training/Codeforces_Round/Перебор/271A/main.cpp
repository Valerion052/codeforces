#include <iostream>

using namespace std;


bool check(int k) {
    int arr[4]{};
    int it=0;
    while (k>0) {
        arr[it]=k%10;
        k/=10;
        for (int x=0; x<it; ++x) {if (arr[x]==arr[it]) {return 0;}}
        ++it;
    }
    return 1;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
    int y; cin >> y;

    for (int i=1; i<1e4; ++i) {if (check(y+i)) {cout << y+i; return 0;}}

}

    