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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = nxt(), x = nxt();
    set < int > s{0,x};
    multiset < int > distance{x};
    for (int i = 0; i < n; i++) {
        int a = nxt();    
        auto it1 = s.upper_bound(a);
        auto it2 = it1;
        it2--;
        distance.erase(distance.find(*it1-*it2));
        distance.insert(a - *it2);
        distance.insert(*it1 - a);
        s.insert(a);
        cout << *distance.rbegin() << " ";
    }
    return 0;
}