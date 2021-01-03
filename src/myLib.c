#include "myLib.h"

int mySum(int number)
{
    return (number * 2);
}

int myFunc(int number)
{
    int ret = 0;
    if (number != 10)
    {
        ret = 100;
    }
    else
    {
        ret = 20;
    }
    
    return (ret >> number);
}