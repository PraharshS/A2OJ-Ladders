#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define MOD 1e9 + 7
#define INF 1e9 + 7
#define len(x) x.size()
#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define FOR(i, n) for (ll i = 0; i < n; i++)
#define FORR(i, n) for (ll i = n - 1; i >= 0; i--)
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n
#define endl "\n";
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;
typedef unordered_map<ll, ll> ump;

int32_t main()
{
    fast;
    int n, m;
    cin >> n >> m;
    int right[n];
    int wrong[m];
    int min1 = INF;
    int min2 = INF;
    int max1 = 0;
    FOR(i, n)
    {
        cin >> right[i];
        max1 = max(max1, right[i]);
        min1 = min(min1, right[i]);
    }
    FOR(i, m)
    {
        cin >> wrong[i];
        min2 = min(min2, wrong[i]);
    }

    if (min2 <= max1)
    {
        cout << -1;
    }
    else if (min1 * 2 >= min2)
    {
        cout << -1;
    }
    else
    {
        cout << max(2 * min1, max1);
    }

    return 0;
}