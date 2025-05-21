#include <iostream>
#include <set>

using namespace std;

int gcd (int a, int b) {
    if (b==0) {return a;}
    else {return gcd(b, a%b);}
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        set<int> delta;

        for (int i=0; i<n; ++i) {cin >> arr[i];}
        for (int j=0; j<n/2; ++j) {delta.insert(abs(arr[j]-arr[n-1-j]));}

        int result = 0;

        if (delta.size()==1) {
            if (*delta.begin()==0) {result=0;}
            else {result=*delta.begin();}
        }
        else if (delta.size()>1) {
            for (auto it = delta.begin(); it!=delta.end(); ++it) {
                auto _it = it;
                ++_it;
                if (_it==delta.end() || result==1) {break;}

                int value = gcd(*_it, *it);
                result = gcd(max(result, value), min(result, value));
            }
        }
        cout << result << '\n';
    }

}