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
    int a, b;
    cin >> a >> b;
    int ac = 0;
    int bc = 0;
    int dr = 0;

    for (int x = 1; x <= 6; x++)
    {
        if (abs(a - x) < abs(b - x))
        {
            ac++;
        }
        else if (abs(a - x) > abs(b - x))
        {
            bc++;
        }
        else
        {
            dr++;
        }
    }
    cout << ac << " " << dr << " " << bc;
    return 0;
}