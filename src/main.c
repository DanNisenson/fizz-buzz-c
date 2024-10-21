#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.c"

#define LIMIT 30

void fizz_buzz(char *buffer, int limit);

int main()
{
    char buffer[1000] = {};

    fizz_buzz(buffer, LIMIT);

    printf("Result:\n%s", buffer);
    return 0;
}

void fizz_buzz(char *buffer, int limit)
{
    for (int i = 1; i <= limit; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            strcat(buffer, "FizBuzz");
        }
        else if (i % 3 == 0)
        {
            strcat(buffer, "Fizz");
        }
        else if (i % 5 == 0)
        {
            strcat(buffer, "Buzz");
        }
        else
        {
            char tmp[3] = {};
            sprintf(tmp, "%d", i);
            strcat(buffer, tmp);
        }

        if (i != limit)
        {
            strcat(buffer, ", ");
        }
        else
        {
            strcat(buffer, ".");
        }
    }
}
