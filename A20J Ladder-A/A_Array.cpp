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
    vector<int> plus;
    vector<int> minus;
    vector<int> zero;
    FOR(i, n)
    {
        cin >> arr[i];
        // add positives first
        if (arr[i] > 0)
        {
            plus.pb(arr[i]);
        }
    }
    // if(no positives then add two negatives )
    if (plus.size() == 0)
    {
        int cnt = 0;
        FOR(i, n)
        {
            if (arr[i] < 0)
            {
                plus.pb(arr[i]);
                arr[i] = -arr[i];
                cnt++;
                if (cnt == 2)
                {
                    break;
                }
            }
        }
    }
    int negCount = 0;
    FOR(i, n)
    {
        if (arr[i] < 0)
        {
            negCount++;
        }
    }
    // if negatives are even then we have to insert one negative to 0 so that count of negatives in minus arr is odd and then dont become positive
    if (negCount % 2 == 0)
    {
        FOR(i, n)
        {
            // just add one negative number and break
            if (arr[i] < 0)
            {

                zero.pb(arr[i]);
                arr[i] = INF;
                break;
            }
        }
        // add the rest of the elements
        FOR(i, n)
        {
            if (arr[i] < 0)
            {
                minus.pb(arr[i]);
            }
            if (arr[i] == 0)
            {
                zero.pb(arr[i]);
            }
        }
    }
    else
    {
        FOR(i, n)
        {
            if (arr[i] < 0)
            {
                minus.pb(arr[i]);
            }
            if (arr[i] == 0)
            {
                zero.pb(arr[i]);
            }
        }
    }
    cout << minus.size() << " ";
    FOR(i, minus.size())
    {
        cout << minus[i] << " ";
    }
    cout << endl;
    cout << plus.size() << " ";
    FOR(i, plus.size())
    {
        cout << plus[i] << " ";
    }
    cout << endl;
    cout << zero.size() << " ";
    FOR(i, zero.size())
    {
        cout << zero[i] << " ";
    }

    return 0;
}