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
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a+3);
	cout << a[2]*10+a[1] + a[0];
}
