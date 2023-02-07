#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("note2.txt","w");
    if(fp==NULL)
    {
        printf("Error while opening a file");
        return 0;
    }
    printf("Enter Data\n");

    while((ch=getchar())!='\n')
    {
        fputc(ch,fp);
    }
    printf("Data is successfully written into the file");
    return 0;
}
