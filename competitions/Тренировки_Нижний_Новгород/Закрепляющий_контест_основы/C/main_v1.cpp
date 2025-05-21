#include <iostream>
#include <map>
#include <vector>

using namespace std;

vector<long long> dict;

void make_dict(){
    long long value = 2;
    for (int i=0; i<31; ++i) {
        dict.push_back(value);
        value *= 2;
    }
} 

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    map<long long, long long> arr;
    for (int i=0; i<n; ++i) {
        long long num;
        cin >> num;
        ++arr[num];
        }   

    make_dict();
    long long counter = 0;

    for (auto j: arr) {
        for (int k=0; k<dict.size(); ++k) {
            long long value = dict[k] - j.first;
            if (arr.find(value)!=arr.end()) {
                if (value == j.first) {
                    counter += (j.second * (j.second - 1)) / 2;
                } else if (value > j.first) {
                    counter += j.second * arr[value];
                }
            }
        }
    }

    cout << counter;
}