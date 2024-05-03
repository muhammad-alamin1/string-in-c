//  reverse string strrev & without rev
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char name[] = "Muhammad Al-Amin";
    char rev_name[51];
    int len, r_index = 0, s_index;

    /* printf("Name: %s\n", name);
    strrev(name);
    printf("Reverse Name: %s\n", name); */

    printf("Name: %s\n", name);

    len = strlen(name);
    for(s_index = len - 1;  s_index >= 0; s_index--)
        rev_name[r_index++] = name[s_index];
    rev_name[r_index] = '\0';

    printf("Reverse Name: %s\n", rev_name);

    return 0;
}




