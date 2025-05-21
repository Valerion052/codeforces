#include <iostream>

using namespace std;

int a, b, c, d;

double f(double x) {return a*x*x*x + b*x*x + c*x;}

int main() {
    cin >> a >> b >> c >> d;
    double l = 0, r = d;

    while (r - l > 1e-7) {
        double middle = (l + r) / 2.0;

        if (f(middle) > d) {r = middle;}
        else {l = middle;}
    }

    printf("%.6f", l);

}