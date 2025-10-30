#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define rev(i, a, b) for (int i = a; i >= b; i--)
#define all(x) x.begin(), x.end()
#define sz(x) ((int)x.size())
#define getv(v, n)              \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        v.pb(x);                \
    }
#define getlv(v, n)             \
    for (int i = 0; i < n; i++) \
    {                           \
        ll x;                   \
        cin >> x;               \
        v.pb(x);                \
    }

void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<ll, int>> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i].first;
            b[i].second = i;
        }
        sort(all(b));
        vector<ll> ans(n, 0);
        ans[b[0].second] = -1;
        ans[b[n - 1].second] = -1;
        for (int i = 1; i < n - 1; i++)
        {
            ll l = (b[i].f + b[i - 1].f) / 2;
            ll r = (b[i].f + b[i + 1].f) / 2;
            ans[b[i].s] = r - l;
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}