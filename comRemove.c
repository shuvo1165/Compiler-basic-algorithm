#include<stdio.h>
int main()
{
    FILE *file1,*file2;
    char ch;

    file1 = fopen("comment.txt","r");
    file2 = fopen("comRem.txt","w");

    while((ch=fgetc(file1))!=EOF)
    {
        if(ch=='/')
        {
            ch = fgetc(file1);
            if(ch=='/')
            {
                while(ch=fgetc(file1)!='\n');
            }
            else if(ch=='*')
            {
                while((ch=fgetc(file1))!=EOF)
                {
                    if((ch=fgetc(file1))=='*' && (ch=fgetc(file1))=='/')
                    {
                        ch='\n';
                        break;
                    }
                }
            }
            else
                fputc('/',file2);
        }
        fputc(ch,file2);
    }
    fclose(file1);
    fclose(file2);
    return 0;
}

