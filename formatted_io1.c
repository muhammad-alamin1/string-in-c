//  formatted input output sprintf
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char buffer[100];
    char name[] = "Muhammad";
    int age = 22, result;
    float salary = 10000.00;

    result = sprintf(buffer, "Name: %s, Age: %d, Salary: %.2f", name, age, salary);
    if(result < 0){
        fprintf(stderr, "An error occurred while formatting the string.\n");
        exit(EXIT_FAILURE);
    }else{
        printf("Buffer Data: %s", buffer);
    }

    return 0;
}



