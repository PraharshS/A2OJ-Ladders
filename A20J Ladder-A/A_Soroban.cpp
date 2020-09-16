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
    vector<string> v;
    v.pb("O-|-OOOO"); //0
    v.pb("O-|O-OOO"); //1
    v.pb("O-|OO-OO"); //2
    v.pb("O-|OOO-O"); //3
    v.pb("O-|OOOO-"); //4
    v.pb("-O|-OOOO"); //5
    v.pb("-O|O-OOO"); //6
    v.pb("-O|OO-OO"); //7
    v.pb("-O|OOO-O"); //8
    v.pb("-O|OOOO-"); //9
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << v[0] << endl;
    }
    while (n)
    {
        int rem = n % 10;
        cout << v[rem] << endl;
        n /= 10;
    }

    return 0;
}