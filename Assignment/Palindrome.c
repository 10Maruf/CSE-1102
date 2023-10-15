#include <stdio.h>
#include <string.h>

int isPalindrome(char number[])
{
    char reversed[20];
    strcpy(reversed, number); 
    // strcpy(reversed, number); 
    strrev(reversed);
    
    if (strcmp(number, reversed) == 0)
        return 1;  // Palindrome
    else
        return 0;  // Not a palindrome
}

int main()
{
    char number[20];

    printf("Enter a number: ");
    scanf("%s", number);

    if (isPalindrome(number))
        printf("%s is a palindrome.\n", number);
    else
        printf("%s is not a palindrome.\n", number);

    return 0;
}

