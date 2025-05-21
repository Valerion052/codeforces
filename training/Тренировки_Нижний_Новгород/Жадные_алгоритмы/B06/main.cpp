#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int m;
    cin >> m;
    int min_m = 100001;
    for (int i=0; i<m; ++i) {int num; cin >> num; if (num<min_m) {min_m = num;}}

    int n;
    cin >> n;
    int arr_n[n];
    for (int j=0; j<n; ++j) {cin >> arr_n[j];}
    sort(arr_n, arr_n+n, [](int x, int y){return x>y;});

    int sum = 0;
    int counter_discount = 0, couner_buy = 0;
    bool buy = true;
    
    for (int k=0; k<n; ++k) {

        if (buy) {sum += arr_n[k]; ++couner_buy;}
        else {++counter_discount;}
        
        if (couner_buy == min_m) {buy=false; couner_buy=0;}
        else if (counter_discount==2) {buy=true; counter_discount=0;}
    }

    cout << sum;
    
}