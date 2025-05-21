#include <iostream>

using namespace std;

const int N = 200001;
long long arr[N]{};

int S(int k) {
    int ans=0;
    while (k!=0){
        ans+=k%10;
        k/=10;
    }
    return ans;
}

void make_arr() {
    for (int i=1; i<N; ++i) {
        arr[i] = arr[i-1] + S(i);
        
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    make_arr();

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << arr[n] << "\n";
    }




}

