#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[81]; // A string of upto 80 chars + '\0'
    int i;

    puts("Please write a string: ");
    fgets(s, 81, stdin);

    puts("Your sentence in reverse: ");
    for (i= strlen(s)-1; i >= 0; i--)
    {
        if (s[i] == '\n')
            continue; // don't write newline
        else
            putchar(s[i]);
    }
    putchar('\n');
    return 0;
}
