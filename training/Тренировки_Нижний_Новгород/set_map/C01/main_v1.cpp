#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, set<int>> dict;
    set<int> unique;

    for (int i=0; i<n; ++i) {
        int x;
        cin >> x;

        if (unique.find(x) == unique.end()) {

            auto it = dict.lower_bound(x);
            
            if (dict.size()==0) {dict[x].insert(x);}
            else {
                if (it == dict.begin()) {dict[x].insert(x);}
                else {
                    --it;
                    if ((*it).first < x) {
                        
                        set<int> local_set = (*it).second;
                        local_set.insert(x);

                        dict[x] = local_set;

                        dict.erase(it);

                    }
                    else {
                        dict[x].insert(x);
                        }
                }
                
            }

        }

        unique.insert(x);
        
    }

    

    for (auto j=dict.rbegin(); j!=dict.rend(); ++j) {
        for (auto k: (*j).second) {
            cout << k  << ' ';
            }
        cout << endl;
    }
}