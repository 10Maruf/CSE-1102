#include <stdio.h>
#include <string.h>

void countVowelsAndConsonants(char sentence[])
{
    int vowels = 0, consonants = 0;

    for (int i = 0; i < strlen(sentence); ++i)
    {
        if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' ||
            sentence[i] == 'o' || sentence[i] == 'u' || sentence[i] == 'A' ||
            sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' ||
            sentence[i] == 'U')
        {
            ++vowels;
        }
        else if ((sentence[i] >= 'a' && sentence[i] <= 'z') ||
                 (sentence[i] >= 'A' && sentence[i] <= 'Z'))
        {
            ++consonants;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
}

int main()
{
    char sentence[100];

    printf("Enter a sentence: ");
    scanf(" %[^\n]", sentence);

    countVowelsAndConsonants(sentence);

    return 0;
}
