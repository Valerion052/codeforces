#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    pair <int, int> arr[n];

    for(int i=0; i<n; ++i) {
        int num;
        cin >> num;
        arr[i].first = i+1;
        arr[i].second = num;
    }

    sort(arr, arr+n, [](pair<int, int> x, pair<int, int> y){return x.second < y.second;});
    
    int count_min = count_if(arr, arr+n, [&](pair<int, int> p){return p.second == arr[0].second;});
    int count_max = count_if(arr, arr+n, [&](pair<int, int> p){return p.second == arr[n-1].second;});

    auto last_unique = unique(arr, arr+n, [](pair<int, int> x, pair<int, int> y){return x.second == y.second;});
    int count_unique = distance(arr, last_unique);


    int flag = 0;
    if (count_unique == 1) {flag = 1;}
    
    else if (count_unique == 2) {
        if ((arr[1].second + arr[0].second)%2 == 0 && count_min==1 && count_max==1) {flag = 2;}
    }
    
    else if (count_unique == 3) {
        if (arr[2].second - arr[1].second == arr[1].second - arr[0].second && count_min==1 && count_max==1) {flag = 3;}
    }


    if (flag==1) {
        printf("Exemplary pages.");
    }
    else if (flag==2) {
        printf("%d ml. from cup #%d to cup #%d.",
            (arr[1].second + arr[0].second)/2,
            arr[0].first,
            arr[1].first);
    }
    else if (flag==3) {
        printf("%d ml. from cup #%d to cup #%d.",
            arr[1].second - arr[0].second,
            arr[0].first,
            arr[2].first);
    }
    else {
        printf("Unrecoverable configuration.");
    }
}