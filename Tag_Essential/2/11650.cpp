// #include <iostream>
// using namespace std;

// int x[1000001];
// int y[1000001];
// int main(void)
// {
//     int n; cin>>n;
    
//     int tempx, tempy;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>x[i]>>y[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             if (x[i] > x[j])
//             {
//                 tempx = x[i];
//                 x[i] = x[j];
//                 x[j] = tempx;
//                 tempy = y[i];
//                 y[i] = y[j];
//                 y[j] = tempy;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             if (x[i] == x[j])
//             {
//                 if (y[i] > y[j])
//                 {
//                     tempy = y[i];
//                     y[i] = y[j];
//                     y[j] = tempy;
//                 }                
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<x[i]<<" "<<y[i]<<"\n";
//     }
//     return 0;

// }
//위 코드는 시간초과

// #include <iostream>
// using namespace std;

// void quick_sort(int *data1, int *data2, int start, int end)
// {
//     if (start >= end)
//     {
//         return;
//     }
//     int pivot = start;
//     int i = pivot + 1;
//     int j = end;
//     int temp;

//     while(i <= j)
//     {
//         while(i <= end && data1[i] <= data1[pivot])
//         {
//             i++;
//         }
//         while(j > start && data1[j] >= data1[pivot])
//         {
//             j--;
//         }
//         if (i > j)
//         {
//             temp = data1[j];
//             data1[j] = data1[pivot];
//             data1[pivot] = temp;
//             temp = data2[j];
//             data2[j] = data2[pivot];
//             data2[pivot] = temp;
//         }
//         else
//         {
//             temp = data1[i];
//             data1[i] = data1[j];
//             data1[j] = temp;
//             temp = data2[i];
//             data2[i] = data2[j];
//             data2[j] = temp;
//         }
//     }

//     quick_sort(data1, data2, start, j - 1);
//     quick_sort(data1, data2, j + 1, end);
// }

// int main(void)
// {
//     int n; cin>>n;
//     int *x = (int*)malloc(sizeof(int)*n);
//     int *y = (int*)malloc(sizeof(int)*n);
//     int *dup = (int*)malloc(sizeof(int)*n);
//     for (int i = 0; i < n; i++) 
//     {
//         cin>>x[i]>>y[i];
//         dup[i] = 0;
//     }
//     int tempn = n;
//     int startLoc = 0;
//     int loc = 0;
//     int count = 0;
//     quick_sort(x, y, 0, n);

//     for (int i = 0; i < n - 1; i++)
//     {
//         if (x[i] == x[i + 1])
//         {
//             count++;
//         }
//         else
//         {
//             dup[i] = count;
//             count = 0;
//         }
//         if(i == n - 2)
//         {
//             dup[i + 1] = count;
//             count = 0;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if(dup[i] != 0)
//         {
//             quick_sort(y, x, i - dup[i], i);
//         }
//     }

//     for (int i = 0; i < n; i++) cout<<x[i]<<" "<<y[i]<<"\n";
//     free(x);
//     free(y);
//     return 0;
// }
//위 코드 반례를 못 찾음
//아래는 algorithm과 vector를 이용한 풀이. sort()를 이용

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
    int n, x, y; cin>>n;
    vector<pair<int, int>> xys;
    for (int i = 0; i < n; i++)
    {
        cin>>x>>y;
        xys.push_back({x, y});
    }
    sort(xys.begin(), xys.end());
    for (int i = 0; i < n; i++) cout<<xys[i].first<<" "<<xys[i].second<<"\n";
    
    return 0;
}
