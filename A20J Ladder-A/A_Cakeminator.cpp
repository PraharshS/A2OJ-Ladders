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
    // unordered_map<pair<int, int>, int> s;

    int row, col;
    cin >> row >> col;
    char arr[row][col];
    int cnt = 0;
    int r[100] = {0}, c[100] = {0};
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'S')
            {
                r[i] = 1;
                c[j] = 1;
            }
        }
    }
    int tr = 0, tc = 0;
    for (int i = 0; i < 100; i++)
    {
        tr += r[i];
        tc += c[i];
    }
    cout << (row * col) - (tr * tc);

    return 0;
}