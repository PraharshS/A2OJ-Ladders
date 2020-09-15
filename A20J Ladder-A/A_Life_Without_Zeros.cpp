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

ll trim(ll n)
{

    ll res = 0;
    while (n)
    {
        ll rem = n % 10;
        if (rem != 0)
        {
            res += rem;
            res *= 10;
        }
        n /= 10;
    }
    res = res / 10;
    while (res)
    {
        ll rem = res % 10;
        n = n * 10 + rem;
        res /= 10;
    }
    return n;
}
int32_t main()
{
    fast;
    ll a, b;
    cin >> a >> b;
    ll sum = a + b;
    a = trim(a);
    b = trim(b);
    sum = trim(sum);

    cout << (a + b == sum ? "YES" : "NO");
    return 0;
}