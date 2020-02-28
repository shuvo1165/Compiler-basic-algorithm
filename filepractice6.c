#include<stdio.h>
int main()
{
    FILE *file;
    char ch[30];
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
            fgets(ch,20,file);
            printf("%s",ch);
        }
        fclose(file);
    }
    getch();
}
