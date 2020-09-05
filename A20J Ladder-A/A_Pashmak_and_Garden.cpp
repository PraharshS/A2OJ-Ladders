#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n
#define endl "\n";
#define MOD 1000000007

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;
typedef unordered_map<ll, ll> ump;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);
    // if change is there
    if (dx != 0 && dy != 0)
    {
        // if change is unequal
        if (dx != dy)
        {
            cout << -1;
        }
        // else print opposite of x1 y1 and x2 y2
        else
        {
            cout << x1 << " " << y2 << " " << x2 << " " << y1;
        }
    }
    // if one change is zero or both
    else
    {
        cout << x1 + dy << " " << y1 + dx << " " << x2 + dy << " " << y2 + dx;
    }

    return 0;
}