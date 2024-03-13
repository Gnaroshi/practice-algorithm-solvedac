// #include <iostream>
// #include <time.h>
// using namespace std;

// void swap(int *numA, int *numB)
// {
//     int temp = *numA;
//     *numA = *numB;
//     *numB = temp;
//     return;
// }

// void quick_sort(int *data, int start, int end)
// {
    
//     if (start >= end)
//     {
//         return;
//     }

//     srand(time(NULL));
//     int pivot_index = rand()%(end - start + 1) + start;
//     int pivot_value = data[pivot_index];
//     swap(&data[pivot_index], &data[start]);

//     int pivot = start;
//     int i, j, temp;
//     i = pivot + 1;
//     j = end;
//     while(i <= j)
//     {
//         while( i <= end && data[i] <= data[pivot]) 
//         {
//             i++;
//         }
//         while(j > start && data[j] >= data[pivot])
//         {
//             j--;
//         }
//         if (i > j)
//         {
//             temp = data[j];
//             data[j] = data[pivot];
//             data[pivot] = temp;
//         }
//         else
//         {
//             temp = data[i];
//             data[i] = data[j];
//             data[j] = temp;
//         }
//     }
//     quick_sort(data, start, j - 1);
//     quick_sort(data, j + 1, end);
// }


// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int tc; cin>>tc;
//     int *nums = (int*)malloc(sizeof(int)*tc);
//     for (int i = 0; i < tc; i++) cin>>nums[i];
    
//     quick_sort(nums, 0, tc - 1);
//     for (int i = 0; i < tc; i++) cout<<nums[i]<<"\n";
//     return 0;
// }
//quick sort는 시간초과

#include <iostream>

using namespace std;


int ans[1000001];
void merge(int *data, int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    int k = start;

    while(i <= mid && j <= end)
    {
        if (data[i] <= data[j])
        {
            ans[k] = data[i];
            i++;
        }
        else
        {
            ans[k] = data[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        for (int temp = j; temp <= end; temp++)
        {
            ans[k] = data[temp];
            k++;
        }
    }
    else
    {
        for (int temp = i; temp <= mid; temp++)
        {
            ans[k] = data[temp];
            k++;
        }
    }
    for(int temp = start; temp <= end; temp++)
    {
        data[temp] = ans[temp];
    }
}

void merge_sort(int *data, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        merge_sort(data, start, mid);
        merge_sort(data, mid + 1, end);
        merge(data, start, mid, end);
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin>>tc;
    int *arr = new int[tc];
    for (int i = 0; i < tc; i++) cin>>arr[i];
    
    merge_sort(arr, 0, tc - 1);

    for (int i = 0; i < tc; i++) cout<<arr[i]<<"\n";
    return 0;
    
}