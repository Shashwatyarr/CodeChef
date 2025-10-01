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
        if (n == 2)
            cout << "0 0" << endl;
        else
        {
            int sum = 0;
            for (int i = 1; i <= n - 2; i++)
            {
                sum += i;
            }
            cout << n - 2 << " " << sum << endl;
        }
    }
}
