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
	int n;
	cin >> n;
	vector<int> a(n);
	int sum = 0;
	for(int i = 0; i < n; ++i) cin >> a[i], sum+=a[i];
	int ans = INT_MAX;
	int s1 = 0, s2 = sum;
	for(int t = 0; t < n; ++t) {
		s1 += a[t];
		s2 -= a[t];
		ans = min(ans, abs(s1-s2));
	}
	cout << ans ;
}
