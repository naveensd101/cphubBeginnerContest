#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long llp;
#define mod 1000000007
#define deb(x) cerr << '\t' << "[" << #x << ": "<< x << "]\n";
#define f first
#define s second
#define pb push_back
/*
numeric_limits<llp>::max();
*/
void solution();
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    llp tc = 1;
    //cin >> tc;
    for (llp t = 0; t < tc; ++t) {
		//cout << "Case #" << tc+1 << ": ";
		solution();
	}
    return 0;
}

void solution() {
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	int max_x = -101;
	int min_y =  101;
	int xi, yi;
	for(int i = 0; i < n; ++i) cin >> xi, max_x = max(max_x, xi);
	for(int i = 0; i < m; ++i) cin >> yi, min_y = min(min_y, yi);
	bool found = 0;
	for(int z = max_x+1; z <= min_y; ++z) {
		if(z > x and z <= y) {
			found = 1;
			break;
		}
	}
	cout << (found ? "No War" : "War");
}
