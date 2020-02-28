#include<stdio.h>
#define MAXCHAR 1000
int main()
{
    FILE *fp;
    char str[MAXCHAR];
    //char* filename = "C:\\Users\\Shuvo\\Desktop\\class.txt";

    fp = fopen("class.txt","r");
    if(fp==NULL){
        printf("!!!!!!!!!!!%s",filename);
        return 1;
    }
    while(fgets(str,MAXCHAR,fp)!=NULL)
       printf("%s\n",str);

    fclose(fp);
    const char s[2]=" ";
    char *token;
    token = strtok(str,"-,; ");
    while(token!=NULL)
    {
        printf("%s\n",token);
        token = strtok(NULL,"-,; ");
    }
    return 0;
}
