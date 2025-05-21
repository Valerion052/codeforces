#include <iostream>
#include <vector>
#include <map>

using namespace std;

const int N=5;
const int M=46; // Длина 5*9=45 (99999) - max сумма цифр

int cal_1(string s, int k) {
    int a=0, b=0;
    for (int i=0; i<k; ++i) {a+=s[i]-'0';}
    for (int i=k; i<s.size(); ++i) {b+=s[i]-'0';}
    return max(a-b, 0);
}

int cal_2(string s, int k) {
    int a=0, b=0;
    for (int i=s.size()-k; i<s.size(); ++i) {a+=s[i]-'0';}
    for (int i=0; i<s.size()-k; ++i) {b+=s[i]-'0';}
    return max(a-b, 0);
}

int main() {
    int n; cin >> n;

    vector<string> arr(n);
    vector<vector<int>> d(6, vector<int>(M, 0));
    for (int i=0; i<n; ++i) {
        cin >> arr[i];
        ++d[arr[i].size()][cal_1(arr[i], arr[i].size())];
    }

    long long ans=0;
    for (int j=0; j<n; ++j) {
        for (int k=arr[j].size(); k>=1; --k) {
            if ((arr[j].size()+k)%2==0) {
                int half=(arr[j].size()+k)/2;
                int v_1 = cal_1(arr[j], half);
                ans+=d[k][v_1];
                if (arr[j].size()!=k) {
                    int v_2 = cal_2(arr[j], half);
                    ans+=d[k][v_2];
                }
                
            }
        }
    }
    cout << ans;
}