#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a = n/36;
    if (n%36==0) {--a;}
    int b = (n-a*36)/4;
    if ((n-a*36)%4!=0) {++b;}

    cout << a+1 <<  ' ' << b;
}