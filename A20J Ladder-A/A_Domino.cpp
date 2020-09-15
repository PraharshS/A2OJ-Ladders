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

    int n;
    cin >> n;
    bool flag = 0;
    int sum1 = 0, sum2 = 0;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        sum1 += x;
        sum2 += y;
        if (sum1 % 2 != sum2 % 2)
        {
            flag = 1;
        }
    }
    // if both are even already
    if (sum1 % 2 == 0 && sum2 % 2 == 0)
    {
        cout << "0";
    }
    // if total sum is odd then cannot divide in two parts or if correct swap doesnt exists
    else if ((sum1 + sum2) % 2 != 0 || !flag)
    {
        cout << "-1";
    }
    // else will only take one swap to make both even
    else
    {
        cout << "1";
    }

    return 0;
}