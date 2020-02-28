#include<stdio.h>
int main()
{
    FILE *file;
    char name[30];
    int age,phone,num,i;
    file = fopen("student.txt","a");
    if(file == NULL)
    {
        printf("No file open\n");
    }
    else
    {
        printf("File is open.\n");
        printf("enter the number of student: \n");
        scanf("%d",&num);
        for(i=1;i<=num;i++)
        {
            printf("Enter student name: \n");
            scanf("%s",&name);
            printf("enter age: ");
            scanf("%d",&age);
            printf("Enter phone name: \n");
            scanf("%d",&phone);
            fprintf(file,"%s  %d %d\n",name,age,phone);
        }
        fclose(file);
    }
    getch();
}

