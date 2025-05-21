#include <iostream>
#include <map>
#include <set>
#include <list>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, list<list<int>>::iterator> dict;
    list<list<int>> arr;
    set<int> unique;

    int counter = 0;

    for (int i=0; i<n; ++i) {
        int x;
        cin >> x;

        if (unique.find(x) == unique.end()) {

            auto it = dict.lower_bound(x);
            
            if (dict.size()==0) {arr.push_back({x}); dict[x] = prev(arr.end());}
            else {
                if (it == dict.begin()) {arr.push_back({x}); dict[x] = prev(arr.end());}
                else {
                    --it;
                    if ((*it).first < x) {

                        auto it_arr = (*it).second;
                        (*it_arr).push_back(x);
                        
                        dict[x] = it_arr;
                        dict.erase(it);

                    }
                    else {
                        arr.push_back({x}); dict[x] = prev(arr.end());
                        }
                }
                
            }

        }

        unique.insert(x);
        
    }

    

    for (auto j=dict.rbegin(); j!=dict.rend(); ++j) {
        for (auto k: *(*j).second) {
            cout << k  << ' ';
            }
        cout << endl;
    }
}