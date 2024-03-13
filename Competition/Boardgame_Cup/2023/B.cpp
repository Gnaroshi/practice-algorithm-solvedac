#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int card[4];
    fill(card, card + 4, 0);
    for (int i = 0; i < n; i++)
    {
        string s;
        int temp;
        cin >> s >> temp;
        if (s == "STRAWBERRY")
        {
            card[0] += temp;
        }
        else if (s == "BANANA")
        {
            card[1] += temp;
        }
        else if (s == "LIME")
        {
            card[2] += temp;
        }
        else if (s == "PLUM")
        {
            card[3] += temp;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (card[i] == 5)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}