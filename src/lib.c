#include <stdio.h>
#include <string.h>

#define FIZZ "Fizz"
#define BUZZ "Buzz"
#define FIZZBUZZ "FizzBuzz"

void intToFizzBuzz(int n, char *buff);

void fizz_buzz(char *buffer, int limit)
{
    for (int i = 1; i <= limit; i++)
    {
        char buff[10] = {};
        intToFizzBuzz(i, buff);
        strcat(buffer, buff);

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

void intToFizzBuzz(int n, char *buff)
{
    if (n % 3 == 0 && n % 5 == 0)
    {
        strcpy(buff, FIZZBUZZ);
    }
    else if (n % 3 == 0)
    {
        strcpy(buff, FIZZ);
    }
    else if (n % 5 == 0)
    {
        strcpy(buff, BUZZ);
    }
    else
    {
        char tmp[3] = {};
        sprintf(tmp, "%d", n);
        strcpy(buff, tmp);
    }
}