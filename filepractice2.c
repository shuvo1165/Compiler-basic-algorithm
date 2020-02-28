#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("test.txt","a");
    char name[20]="Nymur Rahman Shuvo";
    int length=strlen(name);
    int i;
    if(file == NULL)
    {
        printf("No file open");
    }
    else
    {
        printf("File is open.\n");
        for(i=0;i<length;i++)
        {
            fputc(name[i],file);
        }
        printf("File is written successfully.\n");
        fclose(file);
    }
    getch();
}
