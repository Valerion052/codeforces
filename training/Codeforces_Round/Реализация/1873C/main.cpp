#include <iostream>
#include <vector>

using namespace std;

const int N=10;

int calculate(vector<vector<int>> &arr, int x) {
    int sum=0;
    for (int i=0; i<N; ++i) {
        if (x==i || 9-x==i) {for (int j=x; j<=9-x; ++j) {sum+=arr[i][j];}}
        else if (i>x && i<9-x) {sum+=arr[i][x]+arr[i][9-x];}
    }
    return sum*(x+1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;

    while (t--) {
        
        vector<vector<int>> arr(N, vector<int>(N, 0));
        for (int i=0; i<N; ++i) {
            string s; cin >> s;
            for (int j=0; j<N; ++j) {if (s[j]=='X') {arr[i][j]=1;}}
        }

        int ans=0;
        for (int i=0; i<5; ++i) {ans+=calculate(arr, i);}
        cout << ans << "\n";        
    }
}