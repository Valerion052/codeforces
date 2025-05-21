#include <iostream>
#include <vector>

using namespace std;

int n, m;

bool cheak(int k, vector<int> arr) {
    int sum = 0;
    for (int i=1; i<101; ++i) {sum += arr[i]/k;}
    return sum >= n;
}

int main() {
    cin >> n >> m;

    vector<int> arr(101);
    for (int i=0; i<m; ++i) {int num; cin >> num; ++arr[num];}

    int l=0, r = m/n+1, ans=0;

    while (l<=r) {
        int c = (l+r)/2;
        if (c==0) {break;}
        if (cheak(c, arr)) {l = c + 1; ans = c;}
        else {r = c - 1;}
    }
    cout << ans;

    
}