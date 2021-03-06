#include <stdio.h>
int countEvenDigits1(int number);
void countEvenDigits2(int number, int *count);
int main()
{
    int number, result;

    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("countEvenDigits1(): %d\n", countEvenDigits1(number));
    countEvenDigits2(number, &result);
    printf("countEvenDigits2(): %d\n", result);
    return 0;
}
int countEvenDigits1(int number)
{
    /* Write your code here */
    int remainder;
    int numbersOfEven = 0;
    // check if every remainder is even
    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        if (remainder % 2 == 0)
        {
            numbersOfEven++;
        }
    }

    return numbersOfEven;
}
void countEvenDigits2(int number, int *count)
{
    /* Write your code here */
    int remainder;
    int numbersOfEven = 0;
    // check if every remainder is even
    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        if (remainder % 2 == 0)
        {
            numbersOfEven++;
        }
    }
    *count = numbersOfEven;
}