#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

map<long long, int> map_local;


void add_map_local(int x) {
    if (map_local.find(x) == map_local.end()) {
        map_local[x] = 1;
    }
    else {
        ++map_local[x];
    }
}

bool check_multiplicity(int x, int k) {
    return x%k==0;
}

bool find_map(int x) {
    return map_local.find(x) != map_local.end();
}

bool check_unit(int x, int k) {
    return (long long)x/k == (long long)x*k;
}

long long counter_result(vector<pair<int, int>> arr) {
    long long result = 0;

    for (auto x: arr) {
        result += x.first * (long long)x.second;
    }

    return result;
}


int main() {
    int n;
    long long k;
    cin >> n >> k;

    int arr[n];

    vector<pair<int, int>> counter;

    for (int i=0; i<n; ++i) {
        cin >> arr[i];

        add_map_local(arr[i]);

        long long k_1 = arr[i]/k;

        if (check_multiplicity(arr[i], k) && find_map(k_1)) {
            
            counter.push_back({map_local[k_1], 0});
            if (check_unit(arr[i], k)) {
                --counter.back().first;
            }
        }
        else {
            counter.push_back({0, 0});
        }
    }
    
    map_local.clear();
    

    for (int i=n-1; i>=0; --i) {

        add_map_local(arr[i]);
        
        long long k_2 = arr[i]*(long long)k;

        if (check_multiplicity(arr[i], k) && find_map(k_2)) {
            counter[i].second = map_local[k_2];
            if (check_unit(arr[i], k)) {
                --counter[i].second;
            }
        }
    }

    // for (auto x: map_local) {
    //     cout << x.first << " - " << x.second << '\n';
    // }

    // for (auto x: counter) {
    //     cout << x.first << " - " << x.second << '\n';
    // }
    
    cout << (counter_result(counter));

}