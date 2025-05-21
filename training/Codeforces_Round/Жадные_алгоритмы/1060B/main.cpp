#include <iostream>

using namespace std;

int main() {

    string s;
    cin >> s;


    int result=0;

    if (s.size() == 1) {result = s[0]-'0';}
    else {
        int odd = 0;
        
        for (int i=s.size()-1; i>0; --i) {
            int x=s[i]-'0';

            int value = -odd;

            if (x==0) {x=10; odd=1;}
            value += x;
            
            if (value-9 < 0) {result += 10+value-9; odd=1;}
            else {result += value-9;}
        }

        // cout << result << ' ' << (s.size()-1)*9 + s[0]-'0'-1 << endl;

        result += (s.size()-1)*9 + s[0]-'0'-1;
    }
    
    cout << result;

    // cout << (s.size()-1)*9 + s[0]-'0'-1;
}