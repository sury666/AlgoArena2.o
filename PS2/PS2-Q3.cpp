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
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = nxt();
	while (n--){
		int x = nxt(), count = 0;
		for (int i = 1; i * i <= x; i++) {
			if (x % i == 0) {
				count++;
				if (x / i != i){
					count++;
				}
			}
		}
		cout << count << endl;
	}
    return 0;
}