// problem: Majesitc 10
// id: 25893
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
        int nums[3];
        int cnt = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> nums[i];
            if (nums[i] >= 10)
                cnt++;
        }
        for (int i = 0; i < 3; i++)
            cout << nums[i] << ' ';
        cout << '\n';
        if (cnt == 0)
            cout << "zilch";
        else if (cnt == 1)
            cout << "double";
        else if (cnt == 2)
            cout << "double-double";
        else
            cout << "triple-double";
        cout << "\n\n";
    }

    return 0;
}