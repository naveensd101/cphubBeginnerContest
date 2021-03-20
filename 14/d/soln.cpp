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
	int n, l;
	cin >> n >> l;
	vector<int> a(n);
	for(int i = 1; i <= n; ++i) a[i-1] = l + i - 1;
	sort(a.begin(), a.end(), [](int x, int y){return abs(x) < abs(y);});
	int ans = 0;
	for(int i = 1; i < n; ++i) ans+=a[i];
	cout << ans;
}
