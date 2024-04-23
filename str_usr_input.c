// string user input function
/*
    scanf()
    gets()
    fgets()
    loop
*/
#include <stdio.h>

int main(void)
{
    char str[10];
    char ch;
    int i = 0;

    // get str scanf func
    /*printf("Getting input using scanf: ");
    scanf("%9[^\n]s", str);
    printf("%s\n", str);*/

    // get str gets func
    /*printf("Getting input using gets: ");
    gets(str); // buffer overflow, thats-wise c11 doesn't recommend use this func
    printf("%s\n", str);*/

    // get str fgets func
    /*printf("Getting input using fgets: ");
    fgets(str, sizeof(str), stdin); // best method for get string
    printf("%s\n", str);*/

    // get str with loop
    while((ch = getchar()) != '\n'){
        // check buffer overflow
        if(i < 9)
            str[i++] = ch;
    }
    str[i] = '\0';
    printf("%s\n", str);

    return 0;
}
