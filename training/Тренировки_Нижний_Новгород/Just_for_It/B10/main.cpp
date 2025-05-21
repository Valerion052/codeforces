#include <iostream>

using namespace std;

int main() {

    int N;
    cin >> N;


    for (int i=0; i<N; ++i) {

        int M;
        int A[101]{}, B[101]{};
        int mex_A=0;
        int mex_B=0;

        cin >> M;

        for (int j=0; j<M; ++j) {

            int num;
            cin >> num;

            if (A[num] <= B[num]) {
                A[num]++;
            } else {
                B[num]++;
            }
        }

        for (int k=0; k<101; ++k) {
            if (A[k]==0) {
                mex_A=k;
                break;
                }
        }

        for (int c=0; c<101; ++c) {
            if (B[c]==0) {
                mex_B=c;
                break;
                }
        }
        cout << mex_A + mex_B << endl;
    }

    return 0;
}