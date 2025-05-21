#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int t; 
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        vector<bool> visit(n+1, 0);
        vector<int> index(n+1, -1);
        vector<int> length; 
        vector<int> p(n+1);

        for (int i=1; i<=n; ++i) {cin >> p[i];}

        int counter = 0;
        for (int j=1; j<=n; ++j) {
            
            if (!visit[j]) {
                vector<int> adj;
                
                while (!visit[j]) {
                    visit[j]=1;
                    adj.push_back(j);
                    j=p[j];
                }

                ++counter;
                for (int k : adj) {index[k] = counter;}
                length.push_back(adj.size());
            }
        }

        
        vector<bool> error(counter+1, 0);
        long long ans = 0;

        for (int _=0; _<n; ++_){
            
            int d;
            cin >> d;
    
            if (!error[index[d]]) {
                error[index[d]]=1;
                ans+=length[index[d]-1];
            }
            cout << ans << ' ';
        }
        cout << "\n";
    }
}
