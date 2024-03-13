#include <iostream>

using namespace std;

int main(void)
{
    int n; cin>>n;
    int *weight = (int*)malloc(sizeof(int) * n);
    int *height = (int*)malloc(sizeof(int) * n);
    int *grade = (int*)malloc(sizeof(int) * n);
    int count = 0;
    for (int i = 0; i < n; i++) cin>>weight[i]>>height[i];
    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (int j = 0; j < n; j++)
        {
            if (weight[i] < weight[j] && height[i] < height[j])
            {
                count++;
            }
        }
        grade[i] = count;
    }
    for (int i = 0; i < n; i++) cout<<grade[i]<<" ";
    free(weight);
    free(height);
    free(grade);
    return 0;
}