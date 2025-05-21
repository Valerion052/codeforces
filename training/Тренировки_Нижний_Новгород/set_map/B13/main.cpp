#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];
    set<pair<int, int>> values, index;

    for (int i=0; i<n; ++i) {
        cin >> arr[i];
        values.insert({arr[i], i});
        index.insert({i, arr[i]});
    }

    int flag = 1;
    
    while (index.size()>0) {

        pair<int, int> max = *values.rbegin();
        swap(max.first, max.second);

        auto it_max = index.find(max);
        auto it_lower = it_max, it_upper = it_max;

        if (it_max == prev(index.end())) {it_upper = prev(index.end());}
        else {
            for (int c=0; c<k && it_upper!=prev(index.end()); ++c) {
                
                ++it_upper;
                pair<int, int> drop_values = *it_upper;
                
                swap(drop_values.first, drop_values.second);
                values.erase(drop_values);

                arr[(*it_upper).first] = flag;
            }
        }

        if (it_max == index.begin()) {it_lower = index.begin();}
        else {
            for (int _c=0; _c<k && it_lower!=index.begin(); ++_c) {
                
                --it_lower;
                pair<int, int> drop_values = *it_lower;
                
                swap(drop_values.first, drop_values.second);
                values.erase(drop_values);

                arr[(*it_lower).first] = flag;
            }
        }
        
        arr[max.first] = flag;
        swap(max.first, max.second);
        values.erase(max);
        index.erase(it_lower, ++it_upper);
        
        if (flag == 1) {flag = 2;} else {flag = 1;}
    }

    for (int x=0; x<n; ++x) {cout << arr[x];}

}