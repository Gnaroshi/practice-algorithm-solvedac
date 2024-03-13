#include <iostream>
using namespace std;

int main(void)
{
    int a, b;
    int tempa, tempb, temp;
    int seq = 10;
    int n = 20;
    int *cards = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) cards[i] = i + 1;
    
    while(seq--)
    {
        cin>>a>>b;
        tempa = a;
        tempb = b;
        for (int i = 0; i < (int)((b - a + 1) / 2); i++)
        {
            temp = cards[tempa - 1];
            cards[tempa - 1] = cards[tempb - 1];
            cards[tempb - 1] = temp;
            tempa++;
            tempb--;
        }
    }
    for (int i = 0; i < n; i++) cout<<cards[i]<<" ";

    free(cards);
    return 0;
}