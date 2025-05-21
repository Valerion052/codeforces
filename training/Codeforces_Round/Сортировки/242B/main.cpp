#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct line
{   
    int index;
    long long l;
    long long r;
    long long delta;
};

int main() {
    int n;
    cin >> n;
    vector<line> vec;

    for (int i=1; i<=n; ++i) {
        int l, r;
        cin >> l >> r;
        vec.push_back({i, l, r, r-l});
    }

    long long min_l = vec.front().l, max_r = vec.front().r, max_delta = vec.front().delta;
    line result_line = vec.front();
    
    for (int j=1; j<n; ++j) {
        if (vec[j].l < min_l) {min_l=vec[j].l;}
        if (vec[j].r > max_r) {max_r=vec[j].r;}
        if (vec[j].delta > max_delta) {max_delta=vec[j].delta; result_line=vec[j];}
    }

    bool flag = false;

    if (
        result_line.l <= min_l
        &&
        result_line.r >= max_r
        ) {flag=true;}

    if (flag) {cout << result_line.index;} else {cout << -1;}


}
