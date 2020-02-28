#include<stdio.h>
int main()
{
    FILE *file;
    char name[100];
    file = fopen("test.txt","a");
    if(file == NULL)
    {
        printf("No file open");
    }
    else
    {
        printf("File is open.\n");
        printf("Enter your full name: \n");
        gets(name);
        fputs(name,file);
        fputs("\n",file);
        printf("File is written successfully.\n");
        fclose(file);
    }
    getch();
}
