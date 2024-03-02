
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size


void removeFirst(char *, const char);


int main()
{
    char str[MAX_SIZE];
    char toRemove;

    printf("Enter any string: ");
    gets(str);

    printf("Enter character to remove from string: ");
    toRemove = getchar();

    removeFirst(str, toRemove);

    printf("String after removing first '%c' : %s", toRemove, str);

    return 0;
}


void removeFirst(char * str, const char toRemove)
{
    int i = 0;
    int len = strlen(str);


    while(i<len && str[i]!=toRemove)
        i++;


    while(i < len)
    {
        str[i] = str[i+1];
        i++;
    }
}
