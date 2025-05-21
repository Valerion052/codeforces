#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>


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


bool cheak(vector<point> vec, long double t) {

    for (int i=0; i<vec.size(); ++i) {
        vec[i].x_new = new_coordinate(vec[i], t);
    }

    sort(vec.begin(), vec.end(), filter);

    long long max_x_neg = LLONG_MIN;  // Инициализируем минимальным значением

    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i].v < 0) {
            // Обновляем максимальное значение x для отрицательной скорости
            if (vec[i].x > max_x_neg) {
                max_x_neg = vec[i].x;
            }
        } else if (vec[i].v > 0) {
            // Проверяем, есть ли точка с отрицательной скоростью и большей координатой x
            if (max_x_neg > vec[i].x) {
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
        if (vec[i-1].v > 0  && vec[i].v < 0) {
            hit = true;
            long double hit_time = (vec[i].x - vec[i-1].x)/(long double)(vec[i-1].v - vec[i].v);
            if (hit_time < min_hit_time) {min_hit_time = hit_time;}
        }
    }

    if (hit) {
        long double l = 0.0L, r = min_hit_time;
        while (r-l>1e-10L) {
            long double c = (l+r)/2.0L;

            cout << "l =" << l << " r = " << r << endl;

            if (cheak(vec, c)) {r=c;}
            else {l=c;}
        }
        printf("%.9Lf", l);
    } 
    else {printf("%.9Lf", -1.0L);}
}


