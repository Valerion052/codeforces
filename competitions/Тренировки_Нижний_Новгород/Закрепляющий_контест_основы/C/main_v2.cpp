#include <iostream>
#include <map>

using namespace std;

long long dict[31];

void make_dict(){
    long long value = 2;
    for (int i=0; i<31; ++i) {
        dict[i] = value;
        value <<= 1;
    }
} 

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    long long arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    make_dict();
    map<int, int> counter;
    long long result = 0;

    for (int j=n-1; j>=0; --j) {
        for (long long k: dict) {
            long long value = k - arr[j];
            if (counter.count(value)) {result += counter[value];}
        }
        ++counter[arr[j]];
    }

    cout << result;
}