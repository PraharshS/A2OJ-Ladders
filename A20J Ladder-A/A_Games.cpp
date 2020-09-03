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

    //#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    //#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //int t;
    //cin>>t;
    //while (t--)
    //{
    int n;
    cin >> n;
    int a[n], b[n];
    ump mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        mp[a[i]]++;
    }
    int cnt = 0;

    for (int i : b)
    {
        if (mp.find(i) != mp.end())
        {
            cnt += mp[i];
        }
    }
    cout << cnt;
    // }
    return 0;
}