//   strcmp() & strncmp()
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str1[] = "Muhammad";
    char str2[] = "muhammad";
    int result;

    result = strcmp(str1, str2);
    // result = strncmp(str1, str2, 4);
    if(result == 0)
        printf("String are equal.!");
    else if(result < 0)
        printf("Str1 is less than str2.!");
    else
        printf("str1 greater than str2.!");

    printf("\nResult : %d", result);

    return 0;
}

