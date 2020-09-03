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

    string s;
    cin >> s;
    s += "WUB";
    string res;
    int n = s.length();
    bool flag = 0;
    vector<string> v;
    string temp;
    for (int i = 0; i < n;)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B' && i + 2 < n)
        {
            if (temp.length())
            {
                v.pb(temp);
            }

            temp = "";
            i += 3;
        }
        else
        {
            temp += s[i];
            i++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        if (i != v.size() - 1)
        {
            cout << " ";
        }
    }

    return 0;
}