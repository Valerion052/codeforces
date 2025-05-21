#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[101]{};
    for (int i=0; i<n; ++i) {
        int num;
        cin >> num;
        ++arr[num];
    }

    vector<int> ans;
    int counter=0;
    for (int j=1; j<101; ++j) {if (arr[j]%2!=0) {ans.push_back(j);}}
    for (int k=1; k<ans.size(); k+=2) {counter+=ans[k]-ans[k-1];}

    cout << counter;
}