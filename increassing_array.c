#include <stdio.h>
int main()
{
    int n, i, move = 0;
    int ara[2000001];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    for (i = 1; i < n; i++)
    {
        if (ara[i] < ara[i - 1])
        {
            move += (ara[i - 1] - ara[i]);
            ara[i] = ara[i - 1];
        }
    }
    printf("%d\n", move);
    return 0;
}