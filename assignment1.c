//   /home/user/file.txt
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char directory[50] = "/home/user";
    char file_name[] = "file.txt";
    char path[100] = "";

    strcat(directory, "/");
    strcat(directory, file_name);

    int i = 0;
    while(directory[i] != '\0'){
        path[i] = directory[i];

        i++;
    }

    printf("File Path Name: %s", path);

    return 0;
}
