#include<stdio.h>

void main()
{
    char text[100],blank[100];
    int c=0,d=0;

    printf("enter some text\n");
    gets(text);

    while(text[c]!='\0')
    {
        if(!(text[c]==' '&& text[c+1]==' ')){
            blank[d] =text[c];
            d++;
        }
        c++;
    }
    blank[d]='\0';
    printf("text after removing blank\n%s\n",blank);

}
