#include <bits/stdc++.h>
using namespace std;

int func1(int arr[], int num)
{
    int shown[101];
    fill(shown, shown + 101, 0);

    for (int i = 0; i < num; i++)
    {
        if (shown[100 - arr[i]] == 1) return 1;
        shown[arr[i]] = 1;
    }
    return 0;
}

int main(void)
{
    int arr1[3] = {1, 52, 48};
    int arr2[2] = {50, 42};
    int arr3[4] = {4, 13, 63, 87};
    cout<<func1(arr1, 3)<<'\n';
    cout<<func1(arr2, 2)<<'\n';
    cout<<func1(arr3, 4)<<'\n';
    return 0;
}