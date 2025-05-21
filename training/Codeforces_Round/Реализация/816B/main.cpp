#include <iostream>

using namespace std;

const int N = 200009;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k, q;
    cin >> n >> k >> q;

    int arr[N]{};
    int check[N]{};
    for (int i=0; i<n; ++i) {
        int L, R;
        cin >> L >> R;
        ++arr[L]; --arr[R+1];
    }

    for (int j=1; j<N; ++j) {
        arr[j]+=arr[j-1];
        check[j]=(arr[j]>=k)+check[j-1];
    }

    for (int x=0; x<q; ++x) {
        int a, b;
        cin >> a >> b;
        cout << check[b]-check[a-1] << "\n";
    }






    
}