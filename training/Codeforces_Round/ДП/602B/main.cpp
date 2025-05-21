#include <iostream>
#include <set>


using namespace std;

const int N=1e5+1;
int d[N]{};

int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    int ans=0;
    int l=0, r=2;
    int _min=min(arr[0], arr[1]);
    int _max=max(arr[0], arr[1]);
    ++d[_min]; ++d[_max];

    while (r<n) {
        if (max(_max, arr[r]) - min(_min, arr[r]) > 1) {
            while(l<r) {
                --d[arr[l]]; ++l;
                if (d[arr[l-1]]==0) {break;}
            }
            _min=min(arr[l], arr[r]);
            _max=max(arr[l], arr[r]);
        }
        ++d[arr[r]]; ++r;
        ans=max(ans, r-l);        
    }
    cout << max(ans, r-l);
}