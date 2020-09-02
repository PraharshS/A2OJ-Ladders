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

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    for (char &i : s)
    {
        if (i == 'a' || i == 'e' || i == 'o' || i == 'u' || i == 'i' || i == 'y')
        {
        }
        else if (i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U' || i == 'Y')
        {
        }
        else if (i >= 97 && i <= 122)
        {
            cout << '.' << i;
        }
        else if (i >= 65 && i <= 90)
        {
            cout << '.' << char(i + 32);
        }
    }

    return 0;
}