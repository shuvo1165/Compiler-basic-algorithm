#include<stdio.h>
int main() //eha comment soray
{
    FILE *input;
    FILE *output;
    char ch;
    int cnt = 0, block = 0, line = 0;
    input = fopen("comment.txt","r");
    output = fopen("output.txt", "w");
    while ((ch = fgetc(input)) != EOF)
    {
        if (cnt == 0 && ch == '/')
        {
            cnt++;
            continue;
        }
        else if (cnt && ch == '*')
            block = 1;
        else if (cnt && ch == '/')
            line = 1;
        else if (cnt && !block && !line)
        {
            fputc('/', output);
            fputc(ch, output);
            cnt = 0;
            continue;
        }
        if (block)
            if (ch == '*' && fgetc(input) == '/')
            {
                block = 0, cnt = 0;
                continue;
            }
        if (line)
        {
            if (ch == '\n')
                line = 0, cnt = 0;
        }
        if (!block && !line)
            fputc(ch, output);
    }
    fclose(input);
    fclose(output);
}
