#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;

    vector<long long> vec(n);

    for (int i=0; i<n; ++i) {cin >> vec[i];}

    sort(vec.begin(), vec.end());

    unordered_set<long long> vec_check;

    for (int j=0; j<n; ++j) {
        
        if (vec[j]%k == 0) {
            if (vec_check.find(vec[j] / k) != vec_check.end()) {
                continue;
                }
            else {vec_check.insert(vec[j]);}
        }
        else {vec_check.insert(vec[j]);}
    }

    cout << vec_check.size();


    


}