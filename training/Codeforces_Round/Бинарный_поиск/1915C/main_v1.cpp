#include <iostream>

using namespace std;

double cheak(double c) {
    return c*c;
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

        long long sum = 0;
        for (int i=0; i<n; ++i) {int num; cin >> num; sum += num;}

        double l = 0, r = sum;

        while (abs(r - l) > 1e-7) {
            double c = (l+r)/2.0;
            double value = cheak(c);

            if (value > sum) {r = c;}
            else {l=c;}
        }

        double epsilon = 1e-6;
        long long nearest_int = (long long)(l + 0.5);

        if (abs(l - nearest_int) < epsilon && nearest_int * nearest_int == sum) 
        {cout << "YES";} else {cout << "NO";}
        cout << '\n';
    }

}