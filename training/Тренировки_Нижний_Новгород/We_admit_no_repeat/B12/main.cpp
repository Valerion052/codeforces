#include <iostream>
#include <algorithm>
#include <numeric>


using namespace std;

int main() {

    string s;
    cin >> s;

    string s_2 = s;

    sort(s_2.begin(), s_2.end());
    auto last_unique = unique(s_2.begin(), s_2.end());
    int cout_unique = distance(s_2.begin(), last_unique);

    bool flag = true;

    if (cout_unique>=2 && cout_unique<=4) {

        if (cout_unique != 4) {
            
            int arr[3]{};

            arr[0] = count(s.begin(), s.end(), s_2[0]);
            arr[1] = count(s.begin(), s.end(), s_2[1]);

            if (cout_unique > 2) {arr[2] = count(s.begin(), s.end(), s_2[2]);}

            sort(arr, arr+3, [](int x, int y){return x>y;});

            // for (int i=0; i<3; ++i) {cout << arr[i] << ' ';}

            if (cout_unique == 2) {if (arr[0] < 2 || arr[1] < 2) {flag=false;}}
            else if (cout_unique == 3) {if (arr[0] < 2) {flag=false;}}
        }
    }
    else {flag=false;}

    if (flag) {cout << "Yes";} else {cout << "No";}
    



}