#include <iostream>
#include <vector>


using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr;

    for (int i=0; i<n; ++i) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    bool flag = true;

    int count_1 = 0, count_2 = 0;

    while (arr.size()) {

        vector<int>::iterator value;

        if (arr.back() >= arr.front()) {value = arr.end()-1;}
        else {value = arr.begin();}

        if (flag) {flag = false; count_1+=*value;}
        else {flag = true; count_2+=*value;}

        arr.erase(value);
    }

    cout << count_1 << ' ' << count_2;

}