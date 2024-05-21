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
    return a.second < b.second;
}
int main() {
    int n = nxt(), current = 0, ans = 0;
    vector < ii > arr;
    for (int i = 0; i < n; i++) {
        int a = nxt(), b = nxt();
        ii x;
        x.first = a;
        x.second = b;
        arr.pb(x);
    }
    sort(all(arr), compare);
    for (int i = 0; i < n; i++) {
        if (arr[i].first >= current) {
            ans++;
            current = arr[i].second;
        }
    }
    cout << ans << endl;
    return 0;
}