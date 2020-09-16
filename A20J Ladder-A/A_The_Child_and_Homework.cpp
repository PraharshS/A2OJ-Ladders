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
    string a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<int> v;
    v.pb(a.length() - 2);
    v.pb(b.length() - 2);
    v.pb(c.length() - 2);
    v.pb(d.length() - 2);

    sort(all(v));
    if (v[0] <= min3(v[1], v[2], v[3]) / 2 && v[3] >= max3(v[0], v[1], v[2]) * 2)
    {
        cout << "C";
        return 0;
    }
    if (v[0] <= min3(v[1], v[2], v[3]) / 2)
    {
        if (v[0] == a.length() - 2)
        {
            cout << "A";
        }
        else if (v[0] == b.length() - 2)
        {
            cout << "B";
        }
        else if (v[0] == c.length() - 2)
        {
            cout << "C";
        }
        else if (v[0] == d.length() - 2)
        {
            cout << "D";
        }
    }
    else if (v[3] >= max3(v[0], v[1], v[2]) * 2)
    {
        if (v[3] == a.length() - 2)
        {
            cout << "A";
        }
        else if (v[3] == b.length() - 2)
        {
            cout << "B";
        }
        else if (v[3] == c.length() - 2)
        {
            cout << "C";
        }
        else if (v[3] == d.length() - 2)
        {
            cout << "D";
        }
    }
    else
    {
        cout << "C";
    }

    return 0;
}