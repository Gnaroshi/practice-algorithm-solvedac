#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[10] = {3, 2, 7, 116, 62, 235, 1, 23, 55, 77};
    int n = 10;

    int k = max_element(arr, arr + n) - arr;
    cout << "k: " << k << '\n';

    // max_element x
    for (int i = n - 1; i > 0; i--)
    {
        int mxidx = 0;
        for (int j = 1; j <= i; j++)
        {
            if (arr[mxidx] < arr[j])
                mxidx = j;
        }
        swap(arr[mxidx], arr[i]);
    }

    // max_element o
    for (int i = n - 1; i > 0; i--)
    {
        swap(*max_element(arr, arr + i + 1), arr[i]);
    }

    int k2 = max_element(arr, arr + n) - arr;
    cout << "k: " << k2 << '\n';

    return 0;
}