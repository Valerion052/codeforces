#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    pair<int, int> marker[n], cap[m];

    int counter_cap = 0, counter_beautiful = 0;

    for (int i=0; i<n; ++i) {cin >> marker[i].first >> marker[i].second;}

    for (int j=0; j<m; ++j) {
        cin >> cap[j].first >> cap[j].second;

        for (int a=0; a<n; ++a) {
            if (marker[a].second == cap[j].second &&
                marker[a].first == cap[j].first) {
                
                marker[a].second=0;
                marker[a].first=0;
                cap[j].second = -1;
                ++counter_beautiful;
                ++counter_cap;
                break;
            }
        }
        
    }

    for (int b=0; b<m; ++b) {
        for (int c=0; c<n; ++c) {
            if (marker[c].second == cap[b].second) {
                marker[c].second=0;
                ++counter_cap;
                break;
            }
        }
        
    }








    // cout << endl;
    // for (int i=0; i<n; ++i) {
    //     cout << marker[i].first << ' ' << marker[i].second << endl;
    //     }


    cout << counter_cap << ' ' << counter_beautiful << endl;

}