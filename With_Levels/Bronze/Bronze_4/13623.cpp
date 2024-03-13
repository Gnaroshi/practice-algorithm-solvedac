// problem: Zero or One
// id: 13623
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int nums[3];
    int t = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> nums[i];
        t += nums[i];
    }
    if (t == 0 || t == 3)
        cout << "*\n";
    else
    {
        if (t == 1)
        {
            for (int i = 0; i < 3; i++)
            {
                if (nums[i] == 1)
                {
                    cout << char(i + 'A') << '\n';
                    return 0;
                }
            }
        }
        else
        {
            for (int i = 0; i < 3; i++)
            {
                if (nums[i] == 0)
                {
                    cout << char(i + 'A') << '\n';
                    return 0;
                }
            }
        }
    }

    return 0;
}