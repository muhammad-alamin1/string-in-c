//  reverse string two pointer approach
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char name[] = "Muhammad Al-Amin";
    int start = 0, end, temp;

    printf("Name: %s\n", name);

    // reverse string algorithm
    end = strlen(name) - 1;
    while(start < end){
        temp = name[start];
        name[start] = name[end];
        name[end] = temp;

        start++;
        end--;
    }

    printf("Reverse Name: %s\n", name);

    return 0;
}
