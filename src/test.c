#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "lib.c"

// Very small test helpers
int failed = 0;
#define TEST(name) void name()
#define RUN_TEST(name)                     \
    printf("\n\033[1m%s\n\033[0m", #name); \
    name()
#define ASSERT(expr)                                  \
    if (!(expr))                                      \
    {                                                 \
        failed = 1;                                   \
        printf("\033[0;31mFAIL: %s\n\033[0m", #expr); \
    }                                                 \
    else                                              \
    {                                                 \
        printf("\033[0;32mPASS: %s\n\033[0m", #expr); \
    }
#define ASSERT_STR_EQ(str1, str2)                                 \
    if (!(strcmp(str1, str2) == 0))                               \
    {                                                             \
        failed = 1;                                               \
        printf("\033[0;31mFAIL: %s === %s\n\033[0m", str1, str2); \
    }                                                             \
    else                                                          \
    {                                                             \
        printf("\033[0;32mPASS: %s === %s\n\033[0m", str1, str2); \
    }
// End of test helpers

TEST(test_fizzbuzz)
{
    char buffer1[10] = {};
    fizz_buzz(buffer1, 1);
    ASSERT_STR_EQ(buffer1, "1.");
    char buffer2[10] = {};
    fizz_buzz(buffer2, 5);
    ASSERT_STR_EQ(buffer2, "1, 2, Fizz, 4, Buzz.");
    char buffer3[10] = {};
    fizz_buzz(buffer3, 15);
    ASSERT_STR_EQ(buffer3, "1, 2, Fizz, 4, Buzz, Fizz, 7, 8, Fizz, Buzz, 11, Fizz, 13, 14, FizzBuzz.");
}

int main()
{
    // Add a `RUN_TEST` line for each test function
    RUN_TEST(test_fizzbuzz);
    return failed;
}
