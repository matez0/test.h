#include <math.h>

// This has to be the last include and before any code:
#include "test.h"

int increment(int value)
{
    return value + 1;
}

// This shall be the same value for each test case:
int value = 8;

TEST(this_will_pass)
{
    value = increment(value);

    ASSERT(value == 9);
}

TEST(this_will_fail)
{
    ASSERT(0 == 1);
}

TEST(this_will_pass_again)
{
    ASSERT(ceil(3.1) == 4);

    value = increment(value);

    ASSERT(value == 9);
}
