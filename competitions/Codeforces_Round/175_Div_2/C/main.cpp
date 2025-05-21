#include <iostream>

using namespace std;

bool check(long long arr[], const string &s, int n, long long c, int k) {
    int a=0;
    int i=0;
    while(i<n){
        if(arr[i]>c && s[i]=='R'){i++; continue;}

        bool flag = 0;
        while(i<n && !(arr[i]>c && s[i]=='R')){
            if(arr[i]>c && s[i]=='B') {flag=1;}
            i++;
        }
        if(flag) {a++;}
    }
    return a<=k;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--){
        int n, k;
        string s;
        cin >> n >> k >> s;
        
        long long arr[n];
        long long _max = 0;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            if(arr[i] > _max)
                _max = arr[i];
        }

        long long l=0, r= _max;
        while(l<r) {
            long long c=(l+r)/2;
            if(check(arr, s, n, c, k)) {r=c;}
            else {l=c+1;}
        }
        cout << l << "\n";
    }
}
