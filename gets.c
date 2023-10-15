#include <stdio.h>
#include <string.h>

int main() {
    char s[10];
    char s1[10];
  
    // printf("Enter the first sentence: ");
    scanf(" %[^\n]", s);

    scanf(" %[^\n]", s1);

    if (strcmp(s, s1) == 0)
        puts("yes");
    else
        puts("no");

    return 0;
}
