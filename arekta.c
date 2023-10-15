#include <stdio.h>

int main()
{
    int start, end, i, temp, j, count, maxCount;
    while (scanf("%d %d", &start, &end) == 2)
    {
        maxCount = 0;
        printf("%d %d ", start, end);
        if (start > end)
        {
            temp = end;
            end = start;
            start = temp;
        }
        for (i = start; i <= end; i++)
        {
            count = 1;
            j = i;
            while (j > 1)
            {
                if (j % 2 == 0)
                {
                    j = j / 2;
                }
                else
                {
                    j = (3 * j) + 1;
                }
                count++;
            }
            if (count >= maxCount)
            {
                maxCount = count;
            }
        }
        printf("%d\n", maxCount);
    }
    return 0;
}
