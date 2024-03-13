// problem: Word Swap
// id: 10193
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        string a, b;
        cin >> a >> b;
        int iter = a.length(), sum = 0;
        for (int i = 0; i < iter; i++)
        {
            if (a[i] > b[i])
                sum += a[i] - b[i];
            else if (a[i] < b[i])
                sum -= b[i] - a[i];
        }
        cout << "Swapping letters to make " << a << " look like " << b;
        if (sum > 0)
            cout << " earned " << sum << " coins.\n";
        else if (sum - 0)
            cout << " cost " << -1 * sum << " coins.\n";
        else
            cout << " was FREE.\n";
    }

    return 0;
}