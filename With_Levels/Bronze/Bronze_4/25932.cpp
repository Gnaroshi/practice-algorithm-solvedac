// problem: Find the Twins
// id: 25932
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        int a, b, t;
        a = b = 0;
        for (int i = 0; i < 10; i++)
        {
            cin >> t;
            if (t == 17)
                a = 1;
            else if (t == 18)
                b = 1;
            cout << t << ' ';
        }
        cout << '\n';
        if (a && b)
            cout << "both";
        else if (a)
            cout << "zack";
        else if (b)
            cout << "mack";
        else
            cout << "none";
        cout << "\n\n";
    }

    return 0;
}