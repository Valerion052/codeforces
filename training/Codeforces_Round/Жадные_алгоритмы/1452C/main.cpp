#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
     while (t--) {
        string s;
        cin >> s;

        int open_0_l = 0, couner_0 = 0;
        int open_1_l = 0, couner_1 = 0;

        for (int i=0; i< s.size(); ++i) {
            if (s[i] == '(') {++open_0_l;}
            else if (s[i] == ')')  {
                if (open_0_l > 0) {
                    --open_0_l;
                    couner_0 +=1;
                }
            }
            else if (s[i] == '[') {++open_1_l;}
            else if (s[i] == ']')  {
                if (open_1_l > 0) {
                    --open_1_l;
                    couner_1 += 1;
                }
            }           
        }
        
        cout << couner_0 + couner_1 << endl;
     }
}