#include <stdio.h>
#include <string.h>

void lexicographicalOrder(char str[])
{
    int length = strlen(str);
    int i, j;

    printf("Lexicographical order: ");

    for (i = 0; i < length - 1; ++i)
    {
        for (j = i + 1; j < length; ++j)
        {
            if (str[i] > str[j])
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("%s\n", str);
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    lexicographicalOrder(str);

    return 0;
}
