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
    int cnt = 0;
    if (n == 2)
    {
        if (arr[0] >= arr[1])
        {
            cout << 0;
        }
        else
        {
            cout << 1;
        }
    }
    else
    {
        int mnIdx = 0, mxIdx = 0;
        int minE = arr[0], maxE = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= minE)
            {
                mnIdx = i;
                minE = arr[i];
            }
        }
        for (int i = mnIdx; i < n - 1; i++)
        {
            swap(arr[i], arr[i + 1]);
            cnt++;
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > maxE)
            {
                mxIdx = i;
                maxE = arr[i];
            }
        }
        for (int i = mxIdx; i > 0; i--)
        {
            swap(arr[i - 1], arr[i]);
            cnt++;
        }
        cout << cnt;
    }

      return 0;
}