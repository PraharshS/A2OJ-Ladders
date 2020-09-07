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
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.pb(s);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int cnt = 0;
            if (i - 1 >= 0 && v[i - 1][j] == 'o')
            {
                cnt++;
            }
            if (j - 1 >= 0 && v[i][j - 1] == 'o')
            {
                cnt++;
            }
            if (i + 1 < n && v[i + 1][j] == 'o')
            {
                cnt++;
            }
            if (j + 1 < n && v[i][j + 1] == 'o')
            {
                cnt++;
            }
            if (cnt & 1)
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}