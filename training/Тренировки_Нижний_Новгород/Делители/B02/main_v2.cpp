#include <iostream>
#include <vector>

using namespace std;

vector <long long> ans;

void getD(long long k) {
    for (long long i=2; i*i<=k; ++i) {
        while (k%i==0) {
            k/=i;
            ans.push_back(i);
        }
    }
}

int main() {
    long long n;
    cin >> n;
    getD(n);

    if (ans.size() == 0) {cout << "1\n" << 0; return 0;}
    else if (ans.size() == 1) {cout << 2;}
    else if (ans.size() == 2) {
        if (ans[0] * (long long)ans[1] == n) {cout << 2;}
        else {cout << "1\n" << ans[0] * ans[1];}
    }
    else {cout << "1\n" << ans[0] * ans[1];}

}