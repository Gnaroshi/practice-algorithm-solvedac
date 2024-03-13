// problem: Anti-Arithmetic Permutation
// id: 9703
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int iter = 1; iter <= tc; iter++)
    {
        int n;
        cin >> n;
        int *nums = (int *)malloc(sizeof(int) * n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        bool isOK = true;
        for (int i = 0; i < n - 2; i++)
        {
            if (!isOK)
                break;
            for (int j = i + 1; j < n - 1; j++)
            {
                if (!isOK)
                    break;

                for (int k = j + 1; k < n; k++)
                {
                    if (nums[i] + nums[k] == 2 * nums[j])
                    {
                        isOK = false;
                        break;
                    }
                }
            }
        }
        cout << "Case #" << iter << ": ";
        if (isOK)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}