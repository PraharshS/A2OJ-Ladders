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
    int a = 0, b = 0, c = 0;
    vector<int> one;
    vector<int> two;
    vector<int> three;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            one.pb(i + 1);
        if (arr[i] == 2)
            two.pb(i + 1);
        if (arr[i] == 3)
            three.pb(i + 1);
    }
    if (one.size() == 0 || two.size() == 0 || three.size() == 0)
    {
        cout << 0;
    }
    else
    {
        int i = 0;
        int t = min3(one.size(), two.size(), three.size());
        cout << t << endl;
        while (t--)
        {
            cout << one[i] << " " << two[i] << " " << three[i] << endl;
            i++;
        }
    }

    return 0;
}