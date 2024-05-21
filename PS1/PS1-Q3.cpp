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
 
int main() {
    int n = nxt(), m = nxt();
    multiset<int> ticket;
    for (int i = 0; i < n; i++) {
        ticket.insert(nxt());
    }
    for (int i = 0; i < m; i++) {
        int a = nxt();
        auto it = ticket.upper_bound(a);
        if (it == ticket.begin()) {
            cout << -1 << endl;
        } else {
            it--;
            cout << *it << endl;
            ticket.erase(it);
        }
    }
    return 0;
}