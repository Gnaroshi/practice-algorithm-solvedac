#include <iostream>
#define SIZE 3

using namespace std;

int num[SIZE];
bool Solve(int result, int num1, int num2, bool type)
{
    // if ((num1 - num2) == result)
    // {
    //     if (type)
    //     {
    //         cout << num1 << "-" << num2 << "=" << result << '\n';
    //     }
    //     else
    //     {
    //         cout << result << "=" << num1 << "-" << num2 << '\n';
    //     }
    //     return true;
    // }
    // else if ((num1 + num2) == result)
    // {
    //     if (type)
    //     {
    //         cout << num1 << "+" << num2 << "=" << result << '\n';
    //     }
    //     else
    //     {
    //         cout << result << "=" << num1 << "+" << num2 << '\n';
    //     }
    //     return true;
    // }
    // else if ((num1 * num2) == result)
    // {
    //     if (type)
    //     {
    //         cout << num1 << "*" << num2 << "=" << result << '\n';
    //     }
    //     else
    //     {
    //         cout << result << "=" << num1 << "*" << num2 << '\n';
    //     }
    //     return true;
    // }
    if ((num1 / num2) == result)
    {
        if (type)
        {
            cout << num1 << "/" << num2 << "=" << result << '\n';
        }
        else
        {
            cout << result << "=" << num1 << "/" << num2 << '\n';
        }
        return true;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int cnt = 0;
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            for (int k = 1; k < 20; k++)
            {
                if (Solve(k, i, j, true) == true)
                {
                    cout << ++cnt << " - i: " << i << " j: " << j << " k: " << k << '\n';
                }
                else if (Solve(i, j, k, false) == true)
                {
                    cout << ++cnt << " - i: " << i << " j: " << j << " k: " << k << '\n';
                }
            }
        }
    }

    return 0;
}