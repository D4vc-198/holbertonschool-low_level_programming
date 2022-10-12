#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - return last digit of a num
 * @num: is a param
 * Return: return last digit of a number
*/
int print_last_digit(int num)
{
    int lastDigit = (num % 10);

    if (lastDigit < 0)
    {
        lastDigit = lastDigit * -1;
        _putchar('0' + lastDigit);
        return (lastDigit);
    } else 
    {
        _putchar('0' + lastDigit);
        return (lastDigit);
    }
}
