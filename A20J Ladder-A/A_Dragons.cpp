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

// sort by less enemy strength and more bonus
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.fr != p2.fr)
    {
        return p1.fr < p2.fr;
    }
    return p1.sc > p2.sc;
}

bool solve(int s, int n)
{
    vector<pair<int, int>> v;
    int temp = n;
    while (n--)
    {
        int enemyStrength, bonus;
        cin >> enemyStrength >> bonus;
        pair<int, int> p;
        p.fr = enemyStrength;
        p.sc = bonus;
        v.pb(p);
    }
    sort(v.begin(), v.end(), comp);

    for (auto i : v)
    {
        int enemyStrength = i.fr;
        int bonus = i.sc;
        if (s <= enemyStrength)
        {
            return false;
        }
        s += bonus;
    }

    return true;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int s, n;
    cin >> s >> n;

    bool res = solve(s, n);
    cout << (res ? "YES" : "NO");
    return 0;
}