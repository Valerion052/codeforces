#include <iostream>

using namespace std;

bool check(double x, double d) {
    return x*x-d*x+d<=0;
}

int main() {
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

    int t;
    cin >> t;

    while (t--) { 
        int d;
        cin >> d;

        double l=0, r=d;
        while (abs(r-l)>1e-10) {
            double c = (l+r)/2.0;

            if (check(c, d)) {l=c;}
            else {r=c;}
        }

        double b = (double)d-l;

        if ((l+b)-(l*b)<1e-10) {
            cout << "Y ";
            printf("%.12f ", l);
            printf("%.12f\n", b);

        }
        else {cout << "N\n";}

    }
}