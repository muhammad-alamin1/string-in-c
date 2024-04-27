// Count Alphabets, Digits & Special Char
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[101];
    unsigned int index = 0, count = 0, len = 0;

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    while(str[index] != '\0'){
        count++;

        index++;
    }

    len = strlen(str);

    printf("Count: %u\n", count - 1);
    printf("Len With strlen(): %u\n", len - 1);

    return 0;
}

