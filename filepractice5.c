#include<stdio.h>
int main()
{
    FILE *file;
    char ch;
    file = fopen("test.txt","r");
    if(file == NULL)
    {
        printf("No file open");
    }
    else
    {
        printf("File is open\n");
        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c",ch);

        }
        fclose(file);
    }
    getch();
}
