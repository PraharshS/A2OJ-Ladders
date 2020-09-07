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
    int arr[3] = {0};
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i % 3] += x;
    }
    int m = max3(arr[0], arr[1], arr[2]);

    if (arr[0] == m)
    {
        cout << "chest";
    }
    if (arr[1] == m)
    {
        cout << "biceps";
    }
    if (arr[2] == m)
    {
        cout << "back";
    }

    // Short Approach

    // BRUTE CODE
    // if (n == 1)
    // {
    //     cout << "chest";
    //     return 0;
    // }
    // else if (n == 2)
    // {
    //     if (arr[0] > arr[1])
    //     {
    //         cout << "chest";
    //     }
    //     else
    //     {
    //         cout << "biceps";
    //     }
    //     return 0;
    // }
    // int a = 0, b = 0, c = 0;

    // for (int i = 0; i < n; i += 3)
    // {
    //     a += arr[i];
    //     if (i + 1 < n)
    //     {

    //         b += arr[i + 1];
    //     }
    //     if (i + 2 < n)
    //     {

    //         c += arr[i + 2];
    //     }
    // }
    // int mx = max3(a, b, c);
    // if (mx == a)
    // {
    //     cout << "chest";
    // }
    // else if (mx == b)
    // {
    //     cout << "biceps";
    // }
    // else
    // {
    //     cout << "back";
    // }

    return 0;
}