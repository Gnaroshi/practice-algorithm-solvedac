// problem: Tawla
// id: 11800
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << "Case " << i << ": ";
        if (a == b)
        {
            if (a == 1)
                cout << "Habb Yakk";
            else if (a == 2)
                cout << "Dobara";
            else if (a == 3)
                cout << "Dousa";
            else if (a == 4)
                cout << "Dorgy";
            else if (a == 5)
                cout << "Dabash";
            else
                cout << "Dosh";
        }
        else
        {
            if (a < b)
                swap(a, b);
            if (a == 1)
                cout << "Yakk";
            else if (a == 2)
                cout << "Doh";
            else if (a == 3)
                cout << "Seh";
            else if (a == 4)
                cout << "Ghar";
            else if (a == 5)
                cout << "Bang";
            else
                cout << "Sheesh";
            cout << ' ';
            if (a == 6 && b == 5)
                cout << "Beesh";
            else if (b == 1)
                cout << "Yakk";
            else if (b == 2)
                cout << "Doh";
            else if (b == 3)
                cout << "Seh";
            else if (b == 4)
                cout << "Ghar";
            else if (b == 5)
                cout << "Bang";
            else
                cout << "Sheesh";
        }
        cout << '\n';
    }

    return 0;
}