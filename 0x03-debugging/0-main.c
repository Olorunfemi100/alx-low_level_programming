#include "main.h"
/**
* main - Function for positive or negative
* Return: Always 0
*/
void positive_or_negative(int num);

int main(void)
{
    int i = 0;
    positive_or_negative(i);
    return 0;
}

void positive_or_negative(int num)
{
    if (num > 0)
        printf("%d is positive\n", num);
    else if (num < 0)
        printf("%d is negative\n", num);
    else
        printf("%d is zero\n", num);
}

