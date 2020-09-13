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
#define FOR(i, n) for (int i = 0; i < n; i++)

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
    int n;
    cin >> n;
    vector<string> v;
    FOR(i, n)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    char x = v[0][0];
    char notX = v[0][1];
    if (x == notX)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
            {
                if (v[i][j] != x)
                {
                    cout << "NO";
                    return 0;
                }
            }
            else if (v[i][j] != notX)
            {
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";
    return 0;
}