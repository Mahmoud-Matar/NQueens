#include "NQueens.h"
extern int x[200];
void NQueens(int k, int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        if (place(k, i))
        {
            x[k] = i;
            if (k == n)
            {
                print(n);
                cout << endl;
                exit(0);
            }
            else
            {
                NQueens(k + 1, n);
            }
        }

    }
}
