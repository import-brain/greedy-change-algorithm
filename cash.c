#include <stdio.h>

#include <cs50.h>

#include <math.h>

int main()
{

    // get input from user

    float changeAmount = 0;

    do
    {
        changeAmount = get_float("Change owed: ");
    }
    while (changeAmount < 0);

    int cents = round(changeAmount * 100);

    int quarters = 0;

    int dimes = 0;

    int nickels = 0;

    int pennies = 0;

    // math

    while (cents >= 25)
    {
        cents = cents - 25;
        quarters++;
    }

    while (cents < 25 && cents >= 10)
    {
        cents = cents - 10;
        dimes++;
    }

    while (cents < 10 && cents >= 5)
    {
        cents = cents - 5;
        nickels++;
    }

    while (cents < 5 && cents >= 1)
    {
        cents = cents - 1;
        pennies++;
    }

    printf("Quarters: %i\n", quarters);
    
    printf("Dimes: %i\n", dimes);
    
    printf("Nickels: %i\n", nickels);
    
    printf("Pennies: %i\n", pennies);
}
