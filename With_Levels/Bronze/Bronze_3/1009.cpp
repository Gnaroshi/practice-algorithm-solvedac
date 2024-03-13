#include <iostream>
using namespace std;

int main(void)
{
    int testcaseNum; cin>>testcaseNum;
    // int a;
    // int b;
    int *a = (int*)malloc(testcaseNum * sizeof(int));
    long *b = (long*)malloc(testcaseNum * sizeof(long));
    int *output = (int*)malloc(testcaseNum * sizeof(int));

    for(int i = 0; i < testcaseNum; i++)
    {
        cin>>a[i]; cin>>b[i];
    }
    for (int j = 0; j < testcaseNum; j++)
    {
        int temp = 1;
        for (int n = 0; n < b[j]; n++)
        {
            temp *= a[j];
            temp = temp % 10;
            if (temp == 0)
            {
                temp = 10;
            }
        }
        output[j] = temp;
    }

    for (int m = 0; m < testcaseNum; m++)
    {
        cout<<output[m]<<endl;
    }
    // cout<<output[testcaseNum];

    free(a);
    free(b);
    return 0;
}