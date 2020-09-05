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
    int n, total;
    cin >> n >> total;
    ll sum = 0;
    int cnt = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    // total time taken by devu
    int SongTime = sum + 10 * (n - 1);
    // if time is greater than alloted time
    if (SongTime > total)
    {
        cout << -1;
    }

    else
    {
        // cnt of jokes in breaks of 10 mins ie 2 jokes in every brake
        cnt = (n - 1) * 2;
        // cnt in remaining time after devu done
        cnt += ((total - SongTime) / 5);
        cout << cnt;
    }

    return 0;
}