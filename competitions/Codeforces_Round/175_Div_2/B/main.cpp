#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    
    while (t--){
        long long n, x, k;
        string s;
        cin >> n >> x >> k >> s;
        string d = "#"+s;

        long long arr[n+1];
        long long time_cicle = 0;
        long long time_start = 0;
        long long counter = 0;
        long long ans = 0;
        arr[0]=0;

        for (int i=1; i<=n; ++i) {
            ++counter;
            if (d[i]=='L') {
                arr[i]=arr[i-1]-1;
                --x;
            }
            else {
                arr[i]=arr[i-1]+1;
                ++x;
            }
            if (arr[i]==0 && time_cicle==0) {time_cicle = counter;}
            if (x==0 && time_start==0) {++ans; time_start = counter;}
        }
        
        if (k>time_start) {
            long long end_time = k-time_start;
            if (time_cicle>0 && ans>0) {ans = ans + end_time/time_cicle;}
            
        }
        cout << ans << "\n";
        
    }
    
}