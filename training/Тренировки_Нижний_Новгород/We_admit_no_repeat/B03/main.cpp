#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    string s_sort = s;

    sort(s_sort.begin(), s_sort.end());
    

    int count_a = count(s.begin(), s.end(), 'a');
    int count_b = count(s.begin(), s.end(), 'b');
    int count_c = count(s.begin(), s.end(), 'c');


    bool flag = false;

    if ((count_a == count_c || count_b == count_c) && (count_a !=0 && count_b !=0)) {
        if (s_sort == s) {flag = true;}
    }
    
    if (flag) {cout << "YES";} else {cout << "NO";}

}