#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        int bo = 0, al = 0;
        for (int i = 0; i < b; i++)
        {
            if (s[i] == '0')
                bo++;
            else
                al++;
        }
        int l = a - b;
        int n = abs(al - bo);
        if ((n + l) % 2 == 0)
        {
            int m = (n + l) / 2;
            if (m >= 0 && m <= l)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
}
