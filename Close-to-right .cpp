
demolisher
Demolisher
4 days ago
#include <bits/stdc++.h>



#include <ext/pb_ds/assoc_container.hpp>

#include <ext/pb_ds/tree_policy.hpp>



using namespace std;

using namespace __gnu_pbds;



template <class T>

using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;



template <class key, class value, class cmp = std::less<key>>

using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;

// find_by_order(k)  returns iterator to kth element starting from 0;

// order_of_key(k) returns count of elements strictly smaller than k;



#ifdef LOCAL

#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)

#else

#define debug(...) 2351

#endif



#define int long long



mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

inline int64_t random_long(int l = LLONG_MIN, int r = LLONG_MAX) {

    uniform_int_distribution<int64_t> generator(l, r);

    return generator(rng);

}



double Solve() {

    int n, k;

    cin >> n >> k;

    vector<double> a(n);

    for (int i = 0; i < n; i++) {

        cin >> a[i];

    }

    double l = 0, r = 1e9;

    auto check = [&](double x) -> bool {

        int piece = 0;

        for (int i = 0; i < n; i++) {

            piece += a[i] / x;

        }

        if (piece >= k) {

            return true;

        }

        return false;

    };



    while (r - l > 0.000001) {

        double mid = l + (r - l) / 2;

        if (check(mid))

            l = mid;

        else

            r = mid;

    }

    return l;

}



double Actual() {

    int n, k;

    cin >> n >> k;

    vector<double> a(n);

    for (int i = 0; i < n; i++) {

        cin >> a[i];

    }

    double l = 0, r = 1e9;

    auto check = [&](double x) -> bool {

        int piece = 0;

        for (int i = 0; i < n; i++) {

            piece += a[i] / x;

        }

        if (piece >= k) {

            return true;

        }

        return false;

    };



    while (r - l > 0.000001) {

        double mid = l + (r - l) / 2;

        if (check(mid))

            l = mid;

        else

            r = mid;

    }

    return l;

}



int32_t main() {

    ios_base::sync_with_stdio(0);

    cin.tie(0);

    cout.tie(0);

    auto start = std::chrono::high_resolution_clock::now();



    int n, q;

    cin >> n >> q;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {

        cin >> a[i];

    }

    while (q--) {

        int x;

        cin >> x;

        int l = 0, r = n - 1;

        while (l <= r) {

            int mid = l + (r - l) / 2;

            if (a[mid] <= x) {

                l = mid + 1;

            } else {

                r = mid - 1;

            }

        }

        cout << l << "\n";

    }



    auto stop = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);

    cerr << "Time taken : " << ((long double)duration.count()) / ((long double)1e9) << "s " << endl;

    return 0;

};
