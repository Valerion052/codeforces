#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, d, w;
        cin >> n >> k >> d >> w;

        int arr[n];


        for (int i=0; i<n; ++i) {
            cin >> arr[i];
        }

        int t_end = arr[n-1];

        cout << t_end << endl;
        int arr_count[t_end+1] {};

        for (int j=0; j<n; ++j) {
            if (arr[j]+d+w >= t_end) {++arr_count[t_end];} else {++arr_count[arr[j]+w+d];}
        }

        

        int result = 0, counter_k = 0, timer = d;

        for (int a=t_end; a>=0; --a) {

            cout << " arr_count " << a << " = " << arr_count[a];

            if (counter_k > 0) {--timer;}
            if (timer <= 0) {timer = d; counter_k=0;}

            if (arr_count[a] > 0) {

                cout << " | counter_k = " << counter_k;


                int dividend = arr_count[a] - counter_k;
                if (dividend <0) {counter_k -= arr_count[a]; continue;}

                int _private = dividend/k;
                int remainder = dividend%k;
                
                result += _private;
                
                if (remainder > 0) {
                    ++result;
                    counter_k = k - remainder;
                    timer = d;
                    }

                
                cout << " | dividend = " << dividend;
                cout << " | _private = " << _private;
                cout << " | remainder = " << remainder;
                cout << " | result = " << result;

            }
            cout << endl;
                


            //     cout << "_private - " << _private << " | ";

            // }
        }

        // cout << result << endl;
    }
}