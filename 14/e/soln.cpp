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
	int n, x;
	cin >> n >> x;
	vector<int> l(n+1);
	for(int i = 1; i <= n; ++i) cin >> l[i];
	vector<int> d(n+2);
	d[1] = 0;
	for(int i = 2; i <= n; ++i) d[i] = d[i-1] + l[i-1];
	d[n+1] = d[n] + l[n];
	for(int i = 1; i <= n+1; ++i) if(d[i] > x) {
		cout << i-1;
		return;
	}
	cout << n+1;
}
