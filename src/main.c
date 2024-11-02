#include <stdio.h>
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
