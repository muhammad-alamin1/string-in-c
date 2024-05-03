// compare two string without string.h header file
#include <stdio.h>

int main(void)
{
    char str1[] = "appLe";
    char str2[] = "apple";
    unsigned int result = 0, index = 0;

    while(str1[index] != '\0' || str2[index] != '\0'){
        if(str1[index] != str2[index]){
            result = (str1[index] - str2[index]) > 0 ? 1 : -1;
            break;
        }
        index++;
    }

    if(result == 0)
        printf("String are equal.!");
    else if(result < 0)
        printf("Str1 is less than str2.!");
    else
        printf("str1 greater than str2.!");

    printf("\nResult : %d", result);

    return 0;
}
