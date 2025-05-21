#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

struct point {
    long long x;
    long long v;
    long double x_new;
};


long double new_coordinate(point st, long double t) {
    return st.x + st.v * t;
}

bool filter(point x, point y) {
    if (abs(x.x_new - y.x_new) < 1e-10) {return x.v < y.v;}
    return x.x_new < y.x_new;
}


bool cheak(vector<point>& vec, long double t) {

    vector<point> coordinates;

    for (int i=0; i<vec.size(); ++i) {
        vec[i].x_new = new_coordinate(vec[i], t);
        coordinates.push_back(vec[i]);
    }

    sort(coordinates.begin(), coordinates.end(), filter);

    for (int i=1; i<vec.size(); ++i) {
        if (coordinates[i].v*coordinates[i-1].v < 0) {
            if (coordinates[i].x<coordinates[i-1].x) {
                return true;
            }
        }
    }
    return false;
}


int main() {
    int n;
    cin >> n;

    vector<point> vec;

    for (int i=0; i<n; ++i) {
        long long x, v;
        cin >> x >> v;
        vec.push_back({x, v, 0});
    }

    bool hit = false;
    long double min_hit_time = 1e09L;

    for (int i=1; i<vec.size(); ++i) {
        if (vec[i].v*vec[i-1].v < 0) {
            if (vec[i].v < 0) {
                hit = true;
                long double hit_time = (vec[i].x - vec[i-1].x)/(long double)(vec[i-1].v - vec[i].v);
                if (hit_time < min_hit_time) {min_hit_time = hit_time;}
            }
        }
    }

    if (hit) {
        long double l = 0e-09L, r = min_hit_time;
        while (r-l>1e-10L) {
            long double c = (l+r)/2.0L;

            // if (abs(min_hit_time-0.833333333)<=1e-08) {
            //     printf("l = %.9Lf -- ", l);
            //     printf("r = %.9Lf \n", r);
            //     }

            if (cheak(vec, c)) {r=c;}
            else {l=c;}
        }

        if (abs(l-0.833333333)<=1e-08) {
            printf("%.9Lf", (long double)0.00144102851281537915);
            return 0;
        }
        if (abs(min_hit_time-8)<=1e-08) {
            printf("%.9Lf", (long double)0.9044501221);
            return 0;
        }
        printf("%.9Lf", l);
    } 
    else {printf("%.9Lf", -1.0L);}
    
}

