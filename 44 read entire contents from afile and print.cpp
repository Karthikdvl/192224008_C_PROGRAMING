#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX_SIZE  32
int main()
{
    
    FILE *fp = NULL;
    char readFileData[MAX_SIZE+MAX_SIZE] = {0};
    
    fp = fopen("note1.txt", "r");
    if(fp == NULL)
    {
        printf("Error in opening the file\n");
        exit(1);
    }
    
    fscanf(fp,"%s",readFileData);
    
    puts(readFileData);
    
    fclose(fp);
    printf("Read file successfully\n");
    return 0;
}
