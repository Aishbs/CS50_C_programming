#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i", coins);
    printf("\n");
}

int get_cents(void)
{
    int cents;
    // TODO: Get cents from user
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 1);
    return cents;
}

int calculate_quarters(int cents)
{
    // TODO: Calculate the number of quarters
    if (cents >= 25)
    {
        return (cents / 25);
    }
    return 0;
}

int calculate_dimes(int cents)
{
    // TODO: Calculate the number of dimes
    if (cents >= 10)
    {
        return (cents / 10);
    }
    return 0;
}

int calculate_nickels(int cents)
{
    // TODO: Calculate the number of nickels
    if (cents >= 0)
    {
        return (cents / 5);
    }
    return 0;
}

int calculate_pennies(int cents)
{
    // TODO: Calculate the number of pennies
    if (cents >= 0)
    {
        return cents;
    }
    return 0;
}
