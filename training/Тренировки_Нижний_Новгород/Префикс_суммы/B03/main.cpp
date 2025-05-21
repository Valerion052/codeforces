#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    int pre_sum_a[s.size()+1]{}, suf_sum_a[s.size()+1]{}, sum_b[s.size()+1]{};

    for (int i=1; i<=s.size(); ++i) {
        int pre_a = 0, suf_a = 0, b = 0;

        if (s[i-1] == 'a') {++pre_a;}
        else if (s[i-1] == 'b') {++b;}
        if (s[s.size()-i] == 'a') {++suf_a;}

        pre_sum_a[i] = pre_sum_a[i-1] + pre_a;
        sum_b[i] = sum_b[i-1] + b;
        suf_sum_a[s.size()-i] = suf_sum_a[s.size()-i+1] + suf_a;

    }

    int result = 0;
    for (int i=0; i<=s.size(); ++i) {
        for (int j=i; j<=s.size(); ++j) {
            int value = pre_sum_a[i] + (sum_b[j] - sum_b[i]) + suf_sum_a[j];
            result = max(result, value);
        }
    }

    cout << result;

}