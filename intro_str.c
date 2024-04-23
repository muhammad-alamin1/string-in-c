// introduction to string in c program
#include <stdio.h>

int main(void)
{
    char let = 'A';
    char get_str[] = "Hello";
    char world[] = {'w', 'o', 'r', 'l', 'd', '\0'};
    int len;

    printf("%c\n", let);
    printf("%s\n", get_str);
    printf("%s\n", world);

    len = 0;
    while(get_str[len] != '\0'){
        printf("%c", get_str[len++]);
    }

    return 0;
}
