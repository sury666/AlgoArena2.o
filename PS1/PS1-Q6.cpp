#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef vector<vi> vii;
typedef pair<int, int> ii;
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for (typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
int nxt() {
    int x;
    cin >> x;
    return x;
}
 
bool compare (ii a, ii b) {
    return a.second < b.second;
}
int main() {
	int n = nxt(), x = nxt();
    deque < ii > blah;
    for (int i = 0; i < n; i++) {
        ii a;
        a.first = i + 1;
        a.second = nxt();
        blah.pb(a);
    }
    sort(all(blah), compare);
    while (sz(blah)) {
        ii a = blah.front();
        blah.pop_front();
        if (!(sz(blah))) {
            cout << "IMPOSSIBLE" << endl;
            break;
        } else {
            ii b = blah.back();
            while (sz(blah) && a.second + b.second > x) {
                blah.pop_back();
                b = blah.back();
            }
            if (!(sz(blah))) {
                cout << "IMPOSSIBLE" << endl;
                break;
            } else if (a.second + b.second == x) {
                cout << a.first << " " << b.first << endl;
                break;
            }
        }
    }
 	return 0;
}