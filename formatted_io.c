//  formatted input output sscanf & sprintf
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char date[] = "6 May 2001";
    char month[15];
    int day, year, result;

    // read data with sscanf
    result = sscanf(date, "%d %s %d", &day, month, &year);
    if(result == 3){
        printf("Sscanf func Data Read successfully.!\n\n");
        printf("Day: %d\n", day);
        printf("Month: %s\n", month);
        printf("Year: %d\n", year);
    }else{
        fprintf(stderr, "Error parsing input.!");
        exit(EXIT_FAILURE);
    }

    return 0;
}


