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
    int n = nxt(), rounds = 1;
    map < int, int > where;
    for (int i = 0; i < n; i++) {
        where[nxt()] = i;
    }
    for (int i = 1; i < n; i++) {
        rounds += where[i + 1] < where[i];
    }
    cout << rounds << endl;
    return 0;
}