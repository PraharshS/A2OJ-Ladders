#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define MOD 1e9 + 7
#define INF 1e9 + 7
#define len(x) x.size()
#define min(a, b) ((a) > (b) ? (a) : (b))
#define max(a, b) ((a) < (b) ? (a) : (b))
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
    int n;
    cin >> n;
    set<pair<int, int>> s;

    while (n--)
    {
        int x, y;
        cin >> x >> y;
        pair<int, int> p;
        p.fr = x;
        p.sc = y;
        s.insert(p);
    }
    int cnt = 0;
    for (auto i : s)
    {

        bool up = 0;
        bool down = 0;
        bool right = 0;
        bool left = 0;
        for (auto j : s)
        {
            if (i.fr == j.fr)
            {
                if (i.sc < j.sc)
                {
                    up = 1;
                }
                else if (i.sc > j.sc)
                {
                    down = 1;
                }
            }
            if (i.sc == j.sc)
            {
                if (i.fr < j.fr)
                {
                    right = 1;
                }
                else if (i.fr > j.fr)
                {
                    left = 1;
                }
            }
        }
        if (up && down && left && right)
        {
            // cout << i.fr << " " << i.sc << endl;
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}