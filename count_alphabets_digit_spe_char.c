// Count Alphabets, Digits & Special Char
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[101];
    unsigned int small_let = 0, cap_let = 0, digit = 0, spe_char = 0, index = 0;

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    while(str[index] != '\0'){
        if(str[index] >= 'a' && str[index] <= 'z')
            small_let++;
        else if(str[index] >= 'A' && str[index] <= 'Z')
            cap_let++;
        else if(str[index] >= '0' && str[index] <= '9')
            digit++;
        else
            spe_char++;

        index++;
    }

    printf("The String Contains: \n");
    printf("Total Small Letters: %u\n", small_let);
    printf("Total Capital Letters: %u\n", cap_let);
    printf("Total Digit Letters: %u\n", digit);
    printf("Total Special character: %u\n", spe_char);

    return 0;
}
