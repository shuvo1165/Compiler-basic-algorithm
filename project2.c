#include<stdio.h>
int main()
{
    FILE *fp1;
    FILE *fp2;
    char p;

    fp1 = fopen("white.txt","r");
    fp2 = fopen("whiteSpace.txt","w");
    while((p=fgetc(fp1))!=EOF)
    {
        if( p == 32)
        {
            p = fgetc(fp1);
            if(p == 32)
            {
                while(p=fgetc(fp1)=='');
            }
            else
            fputc(' ',fp2);
        }
        if(p !=9)
            if(p !='\n')
    fputc(p,fp2);
    if(p == '\n')
    fputc(' ',fp2);

    }
    fclose(fp1);
    fclose(fp2);
}
