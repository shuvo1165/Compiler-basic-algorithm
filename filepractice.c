#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("test.txt","w");
    if(file == NULL)
    {
        printf("No file open");
    }
    else
    {
        printf("File is open");
        fclose(file);
    }
    getch();
}
