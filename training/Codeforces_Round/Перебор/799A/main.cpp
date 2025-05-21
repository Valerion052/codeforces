#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t, k, d;
    cin >> n >> t >> k >> d;

    int time=0;
    int count=0;
    int target = n%k!=0 ? (n/k+1)*t : n/k*t;

    while (count<n) {
        ++time;
        if (time%t==0) {count+=k;}

        if (time-d>0) {
            if ((time-d)%t==0) {count+=k;}
        }
    }

    if (time<target) {cout << "YES";} else {cout << "NO";}
}