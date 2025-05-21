#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    int n, m;
    cin >> n >> m;

    int arr[m];
    int counter = 1;

    for (int i=0; i<m; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr+m);

    if (arr[m-1]==n || arr[0]==1) {cout << "NO"; return 0;}

    for (int j=1; j<m; ++j) {
        if (counter == 3) {break;}
        if ((arr[j]-arr[j-1])==1) {
            counter +=1;
        } else {counter = 1;}
    }

    if (counter != 3) {cout << "YES";} else {cout << "NO";}
    


}