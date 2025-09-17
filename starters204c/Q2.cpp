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
        int min = a * b;
        int h = min / 60;
        min = min % 60;
        cout << h << " " << min << endl;
    }
}
