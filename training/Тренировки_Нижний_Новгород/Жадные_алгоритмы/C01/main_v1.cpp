#include <iostream>
#include <algorithm>

using namespace std;

int colors[20000000]{};
int diameter[1001]{};

int main() {
    int n, m;
    cin >> n >> m;

    pair<int, int> marker[n], cap[m];
    
    int counter_cap = 0, counter_beautiful = 0;

    for (int i=0; i<n; ++i) {cin >> marker[i].first >> marker[i].second;}

    for (int j=0; j<m; ++j) {
        int d, c;
        cin >> c >> d;
        
        ++diameter[d];
        ++colors[d*10000+c];
    }

    for (int c=0; c<n; ++c) {
        if (
            diameter[marker[c].second] > 0 &&
            colors[marker[c].second*10000 + marker[c].first] > 0
            ) {
                ++counter_beautiful;
                ++counter_cap;
                --diameter[marker[c].second];
                --colors[marker[c].second*10000 + marker[c].first];
                marker[c].second = 0;
        }
    }

    for (int c=0; c<n; ++c) {
        if (diameter[marker[c].second] > 0) {
                ++counter_cap;
                --diameter[marker[c].second];
        }
    }

    cout << counter_cap << ' ' << counter_beautiful << endl; 

}
