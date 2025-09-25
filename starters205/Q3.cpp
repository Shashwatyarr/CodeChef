#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int a = (x + y) / 3;
        int b = min(y, a);
        cout << a + b << endl;
    }
}
