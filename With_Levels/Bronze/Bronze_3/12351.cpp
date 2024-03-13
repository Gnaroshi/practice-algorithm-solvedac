// problem: Hedgemony (Small)
// id: 12351
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed;
    cout.precision(6);
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        cout << "Case #" << i << ": ";
        int n;
        cin >> n;
        double *vin = (double *)malloc(sizeof(double) * n);
        for (int j = 0; j < n; j++)
            cin >> vin[j];
        for (int j = 1; j < n - 1; j++)
        {
            double aver = (vin[j - 1] + vin[j + 1]) / 2;
            if (aver < vin[j])
                vin[j] = aver;
        }
        cout << vin[n - 2] << '\n';
    }

    return 0;
}