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
        int n, x;
        cin >> n >> x;
        if (n > x)
        {
            int a = n - x;
            cout << a * (a + 1) / 2 << endl;
        }
        else
            cout << 0 << endl;
    }

    return 0;
}