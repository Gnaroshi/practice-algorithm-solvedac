#include <iostream>
using namespace std;

int main(void)
{
    int nums[10];
    int remainders[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>nums[i];
        remainders[i] = nums[i] % 42;
    }

    int counter = 0;
    bool isDup = false;
    for (int i = 0; i < 10; i++)
    {
        isDup = false;
        for (int j = i + 1; j < 10; j++)
        {
            if (remainders[i] == remainders[j])
            {
                isDup = true;
            }

        }
        if (!isDup)
        {
            counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}