#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    bool backword = false;
    int h = 1;
    for (int i = 0; i < n; i++)
    {
        string s;
        int temp;
        cin >> s >> temp;
        if (h != temp && s == "HOURGLASS")
            backword = !backword;
        if (h == temp && s != "HOURGLASS")
        {
            cout << h << " YES\n";
        }
        else
            cout << h << " NO\n";

        if (backword && h == 1)
        {
            h = 12;
        }
        else if (!backword && h == 12)
        {
            h = 1;
        }
        else if (backword)
            h -= 1;
        else
            h += 1;
    }

    return 0;
}