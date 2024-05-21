#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> ii;
#define sz(a) int((a).size())
#define pb(a) push_back((a))
#define all(c) (c).begin(), (c).end()
#define tr(c, i) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define present(c, x) ((c).find(x) != (c).end())
#define cpresent(c, x) (find(all(c), x) != (c).end())
 
int nxt() {
    int x;
    cin >> x;
    return x;
}
 
bool compare (ii a, ii b) {
    return a.first < b.first;
}
int main() {
    int n = nxt(), current = 0, max_ = 0;
    vector < ii > a;
    for (int i = 0; i < 2 * n; i++) {
        ii x;
        x.first = nxt();
        x.second = i % 2 ? -1 : 1;
        a.pb(x);
    }
    sort(all(a), compare);
    for (int i = 0; i < 2 * n; i++) {
        current += a[i].second;
        max_ = max(current, max_);
    }
    cout << max_ << endl;
    return 0;
}