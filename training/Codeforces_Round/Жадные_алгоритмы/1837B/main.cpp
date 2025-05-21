#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        string s;
        cin >> n >> s;

        int result = 1, subsequence = 1;

        for (int i=1; i<n; ++i) {
            if (s[i] == s[i-1]) {++subsequence;} else {subsequence=1;}
            result = max(result, subsequence);
        }
        
        cout << result+1 << endl;
    }
}