#include <iostream>

using namespace std;

const int N=8;
const int price=10;
double ans=0;
int n, k, A;

int level[N], loyal[N];
bool vote[N]{};

pair<int, int> calculate_p(int x, int y) {
    return {x, min(100, x+y*price)};
}

double check_kill() {
    int B=0;
    for (int i=0; i<n; ++i) {if (!vote[i]) {B+=level[i];}}
    double value = (double)A/(A+B);
    return value;
}

bool check_success() {
    int count=0;
    for (int i=0; i<n; ++i) {count+=vote[i];}
    return count>(double)n/2;
}

void calculation_scenario(int x, double &sum) {
    if (x==n) {
        double P_S = 1;
        for (int j=0; j<n; ++j) {
            if (vote[j]) {P_S*=loyal[j]/(double)100;}
            else {P_S*=1-loyal[j]/(double)100;}
        }

        if (check_success()) {sum+=P_S;}
        else {
            double kill = check_kill();
            sum+=P_S*kill;
        }
        return;
    }
    for (int i=0; i<=1; ++i) {
        vote[x]=i;
        calculation_scenario(x+1, sum);
    }
}

void distribution_sweets(int x, int count_k) {

    if (x==n) {
        double ans_local = 0;
        calculation_scenario(0, ans_local);
        ans = max(ans, ans_local);
        return;
    }

    for (int i=count_k; i>=0; --i) {
        auto [old_p, new_p] = calculate_p(loyal[x], i);
        loyal[x]=new_p;
        distribution_sweets(x+1, count_k-i);
        loyal[x]=old_p;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k >> A;

    for (int i=0; i<n; ++i) {cin >> level[i] >> loyal[i];}

    distribution_sweets(0, k);
    printf("%.6f", ans);

}

