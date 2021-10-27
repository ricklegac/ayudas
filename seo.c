#include<stdio.h>
#define MAX_LINE 10
int main(){

    return 1;
}
char s[MAX_LINE];
valid = FALSE;
fgets(s, sizeof(s), stdin);
len = strlen(s);
while (len > 0 && isspace(s[len - 1]))
    len--;     // strip trailing newline or other white space
if (len > 0)
{
    valid = TRUE;
    for (i = 0; i < len; ++i)
    {
        if (!isdigit(s[i]))
        {
            valid = FALSE;
            break;
        }
    }