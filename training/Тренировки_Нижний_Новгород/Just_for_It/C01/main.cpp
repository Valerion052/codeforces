#include <iostream>
#include <string>

using namespace std;

struct Shirt {
    string name;
    int count;
};

int main() {

    int N;
    string list_name[] = {"S", "M", "L", "XL", "XXL"};
    Shirt arr[5];

    for (int i=0; i<5; i++) {
        Shirt &s = arr[i];
        s.name = list_name[i];
        cin >> s.count;
    }

    cin >> N;

    for (int j=0; j<N; j++) {
        string row;
        cin >> row;
        bool target_left = false;
        bool target_right = false;
        int id_left = -1;
        int id_right = -1;
        int id_target = -1;

        for (int k=0; k<5; k++) {

            if (arr[k].count>0 && !(target_left)) {id_left=k;}
            if (arr[4-k].count>0 && !(target_right)) {id_right=4-k;}

            if (arr[k].name == row) {target_left = true; id_target = k;}
            if (arr[4-k].name == row) {target_right = true;}
            }
        
        // cout << "id_left - " << id_left << endl;
        // cout << "id_right - " << id_right << endl;
        // cout << "id_target - " << id_target << endl;
        
        
        
        if (id_right < 0) {
            cout << arr[id_left].name << endl;
            arr[id_left].count--;
        } else if (id_left < 0) {
            cout << arr[id_right].name << endl;
            arr[id_right].count--;
        } else if ((id_right-id_target) <= (id_target-id_left)) {
            cout << arr[id_right].name << endl;
            arr[id_right].count--;
        } else {
            cout << arr[id_left].name << endl;
            arr[id_left].count--;
        }
    }
}