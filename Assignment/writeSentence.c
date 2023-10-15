#include <stdio.h>

void writeSentence() {
    char sentence[100];

    printf("Enter a sentence: ");
    scanf(" %[^\n]",sentence);

    printf("You entered: %s\n", sentence);
}

int main() {
    writeSentence();

    return 0;
}
