#include <stdio.h>
#include "lib.c"

#define LIMIT 30;

int main()
{
    int limit = LIMIT;

    for (int i = 1; i <= limit; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FizBuzz");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz");
        }
        else
        {
            printf("%d", i);
        }

        if (i != limit)
        {
            printf(", ");
        }
        else
        {
            printf(".");
        }
    }
}
