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
	int n = nxt(), rooms = 0, last_room = 0, ans[n];
	vector < pair < ii, int > > v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].first.first >> v[i].first.second;
		v[i].second = i;
	}
	sort(all(v));
	priority_queue< ii > pq;
	for (int i = 0; i < n; i++) {
		if (pq.empty()) {
			last_room++;
			pq.push(make_pair(-v[i].first.second, last_room));
			ans[v[i].second] = last_room;
		} else {
			ii min = pq.top();
			if (-min.first < v[i].first.first) {
				pq.pop();
				pq.push(make_pair(-v[i].first.second, min.second));
				ans[v[i].second] = min.second;
			} else {
				last_room++;
				pq.push(make_pair(-v[i].first.second, last_room));
				ans[v[i].second] = last_room;
			}
		}
		rooms = max(rooms, int(pq.size()));
	}
	cout << rooms << "\n";
	for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}