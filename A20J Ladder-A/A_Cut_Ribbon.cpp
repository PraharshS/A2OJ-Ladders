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
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int dp[n + 1] = {0};
    for (int i = 0; i <= n; i++)
    {
        // if the length doesnt exist
        if (dp[i] == 0 && i != 0)
        {
            continue;
        }
        if (i + a <= n)
        {
            dp[i + a] = max(dp[i + a], dp[i] + 1);
        }
        if (i + b <= n)
        {
            dp[i + b] = max(dp[i + b], dp[i] + 1);
        }
        if (i + c <= n)
        {
            dp[i + c] = max(dp[i + c], dp[i] + 1);
        }
    }
    cout << dp[n];
    return 0;
}