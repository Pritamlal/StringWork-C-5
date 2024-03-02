
#include <stdio.h>
#define MAX_SIZE 100          // replace first occurrence of a character

void replaceFirst(char * str, char oldChar, char newChar);


int main()
{
    char str[MAX_SIZE], oldChar, newChar;

    printf("Enter any string: ");
    gets(str);

    printf("Enter character to replace: ");
    oldChar = getchar();


    getchar();

    printf("Enter character to replace '%c' with: ", oldChar);
    newChar = getchar();


    printf("\nString before replacing: %s\n", str);

    replaceFirst(str, oldChar, newChar);

    printf("String after replacing first '%c' with '%c' : %s", oldChar, newChar, str);

    return 0;
}


void replaceFirst(char * str, char oldChar, char newChar)
{
    int i=0;


    while(str[i] != '\0')
    {

        if(str[i] == oldChar)
        {
            str[i] = newChar;
            break;
        }

        i++;
    }
}
