#include <bits/stdc++.h>
using namespace std;

int n = 10;
int arr[10] = {012, 421, 046, 674, 103, 502, 007, 100, 021, 545};
int temp[10][10];
int temp_cnts[10];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int mx = max_element(arr, arr + 10) - arr;
    int mx_element = arr[mx];

    int iter = 0;
    while (mx_element > 0)
    {
        if (mx_element == 0)
            break;
        mx_element /= 10;
        iter++;
    }

    for (int i = 0; i < iter; i++)
    {
        fill(temp_cnts, temp_cnts + n, 0);
        for (int j = 0; j < n; j++)
            fill(temp[j], temp[j] + n, 0);

        int div = 1;
        for (int j = 0; j < i; j++)
            div *= 10;

        for (int j = 0; j < n; j++)
        {
            int dig = arr[j] / div;
            dig %= 10;
            temp[dig][temp_cnts[dig]] = arr[j];
            temp_cnts[dig]++;
        }

        int loc = 0;
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < temp_cnts[j]; k++)
            {
                arr[loc] = temp[j][k];
                loc++;
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << '\n';

    return 0;
}