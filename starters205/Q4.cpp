#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool e = 0, o = 0, f = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                if (i % 2 == 0)
                    e = 1;
                else
                    o = 1;
            }
        }
        if (e && o)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}