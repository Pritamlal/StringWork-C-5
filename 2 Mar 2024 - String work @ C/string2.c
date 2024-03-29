/**
 * C program to remove last occurrence of a character from the given string.
 */
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
void removeLast(char *, const char);


int main()
{
    char str[MAX_SIZE];
    char toRemove;

    printf("Enter any string: ");
    gets(str);

    printf("Enter character to remove from string: ");
    toRemove = getchar();

    removeLast(str, toRemove);

    printf("String after removing last '%c' : %s", toRemove, str);

    return 0;
}


/**
 * Function to remove last occurrence of a character from the string.
 */
void removeLast(char * str, const char toRemove)
{
    int i, lastPosition;
    int len = strlen(str);

    /* Assume that character does not exist in string */
    lastPosition = -1;
    i=0;

    while(i<len)
    {
        if(str[i] == toRemove)
        {
            lastPosition = i;
        }

        i++;
    }

    /* If character exists in string */
    if(lastPosition != -1)
    {
        i = lastPosition;

        /*
         * Shift all characters right to the position found above to left
         */
        while(i<len)
        {
            str[i] = str[i+1];
            i++;
        }
    }
}
