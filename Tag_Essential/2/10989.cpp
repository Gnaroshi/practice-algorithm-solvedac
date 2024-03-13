#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long num; cin>>num;
    int temp;
    int nums[10001] = { 0 };
    for (long i = 0; i < num; i++)
    {
        cin>>temp;
        nums[temp]++;
    }
    

    for (long i = 1; i < 10001; i++)
    {
        if (nums[i] != 0)
        {
            for (int j = 0; j < nums[i]; j++)
            {
                cout<<i<<"\n";
            }
        }
    }
    return 0;
}