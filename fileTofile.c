#include<stdio.h>
int main()
{
    FILE *file1,*file2;
    char ch;
    file1 = fopen("test.txt","r");
    file2 = fopen("copy.txt","a");
    while((ch=fgetc(file1))!=EOF)
    {
        fputc(ch,file2);
    }
    printf("End of copy");
    fclose(file1);
    fclose(file2);
}
