// problem: Rock, Paper, Scissors
// id: 4593
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    while (true)
    {
        cin >> a >> b;
        if (a == b && a == "E")
            break;
        int ca = 0, cb = 0, iter = a.length();
        for (int i = 0; i < iter; i++)
        {
            if (a[i] == 'R' && b[i] == 'S')
                ca++;
            else if (a[i] == 'P' && b[i] == 'R')
                ca++;
            else if (a[i] == 'S' && b[i] == 'P')
                ca++;
            else if (b[i] == 'R' && a[i] == 'S')
                cb++;
            else if (b[i] == 'P' && a[i] == 'R')
                cb++;
            else if (b[i] == 'S' && a[i] == 'P')
                cb++;
        }
        cout << "P1: " << ca << "\nP2: " << cb << '\n';
    }

    return 0;
}