// problem: Golf
// id: 6437
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int cnt = 1;
    while (true)
    {
        int p, s;
        cin >> p >> s;
        if (p + s == 0)
            break;
        cout << "Hole #" << cnt++ << '\n';
        if (p - s == 2 && s == 1)
            cout << "Hole-in-one.";
        else if (s == p - 1)
            cout << "Birdie.";
        else if (s == p - 2)
            cout << "Eagle.";
        else if (s == p - 3)
            cout << "Double eagle.";
        else if (s == p)
            cout << "Par.";
        else if (s == p + 1)
            cout << "Bogey.";
        else
            cout << "Double Bogey.";
        cout << "\n\n";
    }

    return 0;
}