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
    int arr[n];
    FOR(i, n)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    while (1)
    {
        int cnt = 0;
        FOR(i, n)
        {
            if (i == n - 1)
                continue;
            if (arr[i] < arr[i + 1])
            {
                cnt++;
            }
        }
        // if no greater element found then break the loop
        if (cnt == 0)
        {
            break;
        }
        // keep subtracting
        FORR(i, n)
        {
            if (i == 0)
                continue;
            else if (arr[i] > arr[i - 1])
            {
                arr[i] -= arr[i - 1];
            }
        }
        // and sort it again

        sort(arr, arr + n);
    }
    int sum = 0;
    FOR(i, n)
    {
        sum += arr[i];
    }
    cout << sum;
    return 0;
}