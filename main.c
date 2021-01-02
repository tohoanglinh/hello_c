#include <stdio.h>
#include <assert.h>
#include "myLib.h"


int main(void)
{
    printf("Hello World");

    printf("%d", mySum(10));

    assert(mySum(10) == 25);

    printf("Hello World 1");

    return 0;
}