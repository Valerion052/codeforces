#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int k;
    string s;
    cin >> s >> k;

    int alphabet[26];
    int price = 0, max = -1, size = s.size();

    for (int i=0; i<26; ++i) {
        cin >> alphabet[i];
        if (alphabet[i] > max) {max = alphabet[i];}
    }

    for (int j=0; j<size; ++j) {
        price += (j+1)*alphabet[s[j] - 97];
    }

    // for (int a=1; a<k+1; ++a) {
    //     price += (size+a)*max;
    // }


    // Арифметическая прогрессия (size+size+k+1)/2*k
    price += max * (2LL*size+k+1)*k/2;


    cout << price;


}