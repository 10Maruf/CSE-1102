#include <stdio.h>
#include <string.h>

int main()
{
    int a;
    scanf("%d", &a);
    
    while (a--)
    {
        char b[1001];
        scanf("%s", b);
        
        int c = strlen(b);
        int d = c / 2;
        int e[26] = {0};
        
        for (int i = 0; i < d; i++)
        {
            e[b[i] - 'a']++;
        }
        
        int flag = 1;
        
        for (int i = d + (c % 2); i < c; i++)
        {
            e[b[i] - 'a']++;
            
            if (e[b[i] - 'a'] < 2)
            {
                flag = 0;
                break;
            }
        }
        
        if (flag)
        {
            puts("YES");
        }
        else
        {
            puts("NO");
        }
    }
    
    return 0;
}
