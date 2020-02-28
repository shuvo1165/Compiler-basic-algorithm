#include<stdio.h>
int main()
{
    FILE *file;
    char name[100];
    int age;
    file = fopen("test5.txt","a");
    if(file == NULL)
    {
        printf("No file open");
    }
    else
    {
        printf("File is open.\n");
        printf("Enter your full name: \n");
        gets(name);

        printf("Enter your age: \n");
        scanf("%d",&age);
        fprintf(file,"Name = %s, Age = %d\n",name,age);

        printf("File is written successfully.\n");
        fclose(file);
    }
    getch();
}
