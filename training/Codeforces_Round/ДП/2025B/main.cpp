#include <iostream>

using namespace std;

const int N=1e5+1;
const int MOD=1e9+7;

int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int d[N]{};
    d[0]=d[N-1]=1;
    for (int i=1; i<N-1; ++i) {d[i]=(d[i-1]*2)%MOD;}

    int n; cin >> n;
    int arr_n[n], arr_k[n];
    for (int i=0; i<n; ++i) {cin >> arr_n[i];}
    for (int i=0; i<n; ++i) {cin >> arr_k[i];}

    for (int i=0; i<n; ++i) {
        if (arr_n[i]==arr_k[i]) {cout << 1;}
        else {cout<<d[arr_k[i]];}
        cout << "\n";
    }




}