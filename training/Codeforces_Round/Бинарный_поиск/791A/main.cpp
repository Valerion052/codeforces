#include <iostream>

using namespace std;

bool cheak(int a, int b, int k) {
    int a_copy = a, b_copy = b;
    for (int i=0; i<k; ++i) {
        a_copy *=3;
        b_copy *=2;
    }
    return a_copy > b_copy;
}

int main() {
    int a, b;
    cin >> a >> b;

    int l = 0, r=8;
    while(l<=r) {
        int c=(l+r)/2;
        if (cheak(a, b, c)) {r=c-1;}  
        else {l=c+1;}
    }

    cout << l; 

}