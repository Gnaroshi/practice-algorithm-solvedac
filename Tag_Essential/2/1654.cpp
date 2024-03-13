// #include <iostream>
// using namespace std;

// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long k, n; cin>>k>>n;
//     long *nums = (long*)malloc(sizeof(long)*k);
//     long max = 0;
//     for (int i = 0; i < k; i++)
//     {
//         cin>>nums[i];
//         max += nums[i];
//     }
//     max /= n;
//     int count = 0;
//     while(true)
//     {
//         count = 0;
//         for (int i = 0; i < k; i++)
//         {
//             count += nums[i] / max;
//         }
//         if (count == n)
//         {
//             break;
//         }
//         else
//         {
//             max--;
//         }
//     }
//     cout<<max<<"\n";
//     free(nums);
//     return 0;
// }

//위 코드는 시간초과, 이분탐색을 이용하여 풀어야 한다.
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int k, n; cin>>k>>n;
    int nums[10001];  
    int max_num = 0;
    long long low, mid, high; 
    for (int i = 0; i < k; i++)
    {
        cin>>nums[i];
        if (max_num < nums[i])
        {
            max_num = nums[i];
        }
    }

    int output = 0;
    int count = 0;
    low = 1;
    high = max_num;
    while (low <= high)
    {
        count = 0;
        mid = (low + high) / 2;
        for (int i = 0; i < k; i++)
        {
            count += nums[i]/mid;
        }
        if (count >= n)
        {
            low = mid + 1;
            if (output < mid)
            {
                output = mid;
            }
            
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << output<<"\n";
    return 0;
}