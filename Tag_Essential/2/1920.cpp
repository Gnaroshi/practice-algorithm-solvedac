#include <iostream>
#include <algorithm>

using namespace std;

// void binary_search(vector<long> table, long start, long end, long num)
// {
//     if (start > end)
//     {
//         cout<<"0\n";
//         return;
//     }
//     int mid = (start + end) / 2;
//     if (table[mid] == num)
//     {
//         cout<<"1\n";
//         return;
//     }
//     else if (table[mid] > num)
//     {
//         binary_search(table, start, mid - 1, num);
//         return;
//     }
//     else
//     {
//         binary_search(table, mid + 1, end, num);
//         return;
//     }
//     return;
// }

void binary_search (long *nums, long size, long num)
{
    int start = 0;
    int end = size - 1;
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (nums[mid] == num)
        {
            cout<<1<<"\n";
            return;
        }
        else if (nums[mid] > num)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout<<0<<"\n";
    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long temp;
    long n; cin>>n;
    long *numsA = (long*)malloc(sizeof(long)*n);
    for (int i = 0; i < n; i++) 
    {
        cin>>numsA[i];
    }
    sort(numsA, numsA + n);

    long m; cin>>m;
    for (int i = 0; i < m; i++) 
    {
        cin>>temp;
        // binary_search(numsA, 0, n, temp);
        binary_search(numsA, n, temp);
    }
    
    return 0;
}