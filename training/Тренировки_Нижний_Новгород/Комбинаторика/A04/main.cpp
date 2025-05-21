#include <iostream>

using namespace std;

const int MOD = 1e9+7;
const int N = 200;

int C[N][N];

void make_C() {
    C[1][1] = 1;
    for (int i=2; i<N; ++i) {
        C[i][1] = C[i][i] = 1;
        for (int j=2; j<=i-1; ++j) {
            C[i][j] = (long long)(C[i-1][j-1] + C[i-1][j])%MOD;
        }
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    make_C();

    int n, m, k;
    cin >> n >> m >> k;

    pair<int, int> arr[k+2];

    for (int i=1; i<=k; ++i) {
        int a, b;
        cin >> a >> b;
        arr[i].first = a;
        arr[i].second = b;
    }

    arr[0].first = 1;
    arr[0].second = 1;
    arr[k+1].first = n;
    arr[k+1].second = m;

    int ans = 1;
    for (int j=1; j<k+2; ++j) {
        int a_new = abs(arr[j].first - arr[j-1].first)+1;
        int b_new = abs(arr[j].second - arr[j-1].second)+1;

        // cout << a_new << ' ' << b_new << " = " << C[a_new+b_new-1][a_new] << '\n';


        ans = ((long long)ans * C[a_new+b_new-1][a_new]%MOD)%MOD;
    }

    cout << ans;
    
    
    
    
    // for (int i=1; i<=20; ++i) {
    //     for (int j=1; j<=20; ++j) {cout << C[i][j] << ' ';}
    //     cout << '\n';
    // }




}