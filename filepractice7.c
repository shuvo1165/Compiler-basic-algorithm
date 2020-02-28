#include<stdio.h>
int main()
{
    FILE *file;
    char fname[10],lname[10];
    int age;
    file = fopen("test4.txt","r");
    if(file == NULL)
    {
        printf("No file open");
    }
    else
    {
        printf("File is open\n");
        fscanf(file,"%s %s %d",&fname,&lname,&age);
        printf("%s %s %d",fname,lname,age);
        fclose(file);
    }
    getch();
}
