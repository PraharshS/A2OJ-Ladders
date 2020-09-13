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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = INT_MAX;

    // from 2nd element to 2nd last element
    for (int i = 1; i < n - 1; i++)
    {
        int temp = 0;
        // max ans by removing i element
        for (int j = 1; j < n; j++)
        {
            if (i == j)
                continue;
            int last = (j - 1 == i ? j - 2 : j - 1);
            temp = max(temp, arr[j] - arr[last]);
        }
        // take min of all max answers
        ans = min(ans, temp);
    }
    cout << ans;
    return 0;
}