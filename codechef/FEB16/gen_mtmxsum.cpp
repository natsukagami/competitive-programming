#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ff(i, a, b) for(int i = a; i <= b; i++)
#define fo(i, a, b) for(int i = a; i < b; i++)
#define fod(i, a, b) for(int i = a; i >= b; i--)
#define pb push_back
#define mp make_pair
#define fi first
#define se second

const int INF = 1e9, N = 100010;
const ll INFL = 1e18;

typedef pair <int, int> ii;
typedef vector <int> vi;
typedef vector <ii> vii;

int n;

int main() {
	freopen("mtmxsum.in", "w", stdout);
	ios_base::sync_with_stdio(false); cin.tie(0); srand(time(NULL));
	n = rand() % 10000 + 1;
	cout << n << endl;
	ff(i, 1, n) cout << rand() % 1000000000 + 1 << " "; cout << endl;
	ff(i, 1, n) cout << rand() % 1000000000 + 1 << " "; cout << endl;
}