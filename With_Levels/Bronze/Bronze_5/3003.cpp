#include <iostream>
using namespace std;

int main(void)
{
    int correctPieces[6] = {1, 1, 2, 2, 2, 8};
    int wrongPieces[6];
    for (int i = 0; i < 6; i++)
    {
        cin>>wrongPieces[i];
    }
    for (int j = 0; j < 6; j++)
    {
        if (j != 5)
        {
            cout<<correctPieces[j] - wrongPieces[j]<<" ";
        }
        else
        {
            cout<<correctPieces[j] - wrongPieces[j];
        }
    }
    
    return 0;
}