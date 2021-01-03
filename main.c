#include <stdio.h>
#include <assert.h>
#include "myLib.h"


int main(void)
{
    printf("%d\n", mySum(10));

    assert(mySum(10) == 20);

    printf("%d\n", myFunc(100));

    return 0;
}