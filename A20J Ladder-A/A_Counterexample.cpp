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
    ull a, b;
    cin >> a >> b;
    if (b - a == 1)
    {
        cout << -1;
        return 0;
    }
    for (ull i = a; i <= b; i++)
    {
        for (ull j = i + 1; j <= b; j++)
        {
            if (__gcd(i, j) == 1)
            {
                for (ull k = j + 1; k <= b; k++)
                {
                    if (__gcd(j, k) == 1 && __gcd(i, k) != 1)
                    {
                        cout << i << " " << j << " " << k;
                        return 0;
                    }
                }
            }
        }
    }
    cout << -1;

    return 0;
}