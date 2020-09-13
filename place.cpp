#include "place.h"
extern int x[200];
bool place(int k, int i)
{
    int j;
    for (j = 1; j < k; j++)
    {
        if ((x[j] == i) or (abs(x[j] - i) == abs(j - k)))
        {
            return false;
        }
    }
    return true;
}
